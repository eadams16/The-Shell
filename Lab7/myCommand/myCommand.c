#include "../pipes/pipes.h"
#include "../tokenize/makeArgs.h"
#include "../process/process.h"
#include "../utils/myUtils.h"
#include "myCommand.h"
#include "../linkedlist/linkedList.h"
#include "../fileUtils/fileUtils.h"

void * buildCommand(char * s)
{
    MyCommand * command = calloc(1, sizeof(MyCommand));

    command->data = (char *) calloc(strlen(s)+1, sizeof(char));
    strcpy(command->data, s);

    return command;
}

char * printCommand(void * ptr)
{
    MyCommand * temp = (MyCommand *)ptr;
    return temp->data;
}

void printCommand2(void * ptr)
{
    MyCommand * temp = (MyCommand *)ptr;
    printf("%s\n", temp->data);
}

void executeCommand(void * ptr, int count, int fileCount)
{
    //TODO: CONFIGURE FOR THE WHOLE MAIN
    MyCommand * temp = (MyCommand *)ptr;
    char ** argv;
    int argc, pipeCount;
    int preCount = 0, postCount = 0, midCount = 0;
    char ** prePipe = NULL, ** postPipe = NULL, ** midPipe = NULL;
    LinkedList * someList = linkedList();

    if(strcmp(temp->data, "history") == 0){
        FILE * poshHist = fopen(".posh_history", "r");
        if(poshHist != NULL){
            loadHistory(poshHist, someList, fileCount);
            printList(someList, printCommand2, count);
            fclose(poshHist);
            poshHist = NULL;
        }else{
            printf("No history\n");
        }
    }else if (strstr(temp->data, "&") != NULL) {
        char run[MAX];
        char * saveptr;
        strcpy(run, temp->data);
        char * toRun = strtok_r(run, "&", &saveptr);

        argc = makeargs(toRun, &argv);
        if(argc != -1){
            if(fork() == 0){
                execvp(argv[0], argv);
                exit(-1);
            }
        }
        clean(argc, argv);
        argv = NULL;
    }else if(strstr(temp->data, ">") != NULL){
        if(strlen(temp->data) <= 4){
            printf("Invalid use of redirect\n");
        }else{
            redirectStdOut(temp->data);
        }
    }else {
        pipeCount = containsPipe(temp->data);
        if(pipeCount == 1){
            prePipe = parsePrePipe(temp->data, &preCount);
            postPipe = parsePostPipe(temp->data, &postCount);
            pipeIt(prePipe, postPipe);
            clean(preCount, prePipe);
            clean(postCount, postPipe);
        }
        else if(pipeCount == 2) {
            prePipe = parsePrePipe(temp->data, &preCount);
            midPipe = parseMidPipe(temp->data, &midCount);
            postPipe = parsePostPipe2(temp->data, &postCount);
            pipeIt2(prePipe, midPipe, postPipe);
            clean(preCount, prePipe);
            clean(midCount, midPipe);
            clean(postCount, postPipe);
        }else if(pipeCount > 2){
            printf("Invalid command; more than 2 pipes\n");
        }else {
            argc = makeargs(temp->data, &argv);
            if (argc != -1)
                forkIt(argv);
            clean(argc, argv);
            argv = NULL;
        }
    }

    clearList(someList, cleanCommand);
    free(someList);
    someList = NULL;
}

void cleanCommand(void * ptr)
{
    MyCommand * temp = (MyCommand *)ptr;
    free(temp->data);
    temp->data = NULL;
    free(temp);
    temp = NULL;
}