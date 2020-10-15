#include "./pipes/pipes.h"
#include "./utils/myUtils.h"
#include "./process/process.h"
#include "./tokenize/makeArgs.h"
#include "./fileUtils/fileUtils.h"
#include "./linkedlist/listUtils.h"
#include "./myCommand/myCommand.h"
#include "./myAlias/myAlias.h"

int main()
{
    int argc, pipeCount, histCount, histFileCount;
    char **argv = NULL, s[MAX];
    char * temp = NULL;
    int preCount = 0, postCount = 0, midCount = 0;
    char ** prePipe = NULL, ** postPipe = NULL, ** midPipe = NULL;
    LinkedList * historyList = linkedList();
    LinkedList * someList = linkedList();
    LinkedList * aliasList = linkedList();

    FILE *filein = fopen(".poshrc", "r");
    if(filein == NULL){
        histCount = 100;
        histFileCount = 100;
    }else{
        histCount = readHistCount(filein);
        histFileCount = readHistFileCount(filein);
        checkAlias(aliasList, filein);
        fclose(filein);
        filein = NULL;
    }

    FILE *poshHist = fopen(".posh_history", "r");
    if(poshHist != NULL){
        loadHistory(poshHist, historyList, histFileCount);
        fclose(poshHist);
        poshHist = NULL;
    }

    printf("command?: ");
    fgets(s, MAX, stdin);
    strip(s);
    MyCommand * command = buildCommand(s);

    while(strcmp(s, "exit") != 0){
        if(inList(s, aliasList) != NULL){
            MyAlias * alias2 = inList(s, aliasList);
            executeCommand(alias2->realCmd, histCount, histFileCount);
        }else if(strcmp(s, "history") == 0){
            poshHist = fopen(".posh_history", "r");
            if(poshHist != NULL){
                loadHistory(poshHist, someList, histCount);
                printList(someList, printCommand2, histFileCount);
                fclose(poshHist);
                poshHist = NULL;
            }else{
                printf("No history\n");
            }
        }else if(strcmp(s, "!!") == 0){
            if(historyList->size != 0){
                temp = executeLast(historyList, executeCommand, printCommand, histCount, histFileCount);
            }else{
                printf("No command to execute\n");
            }
            if(temp != NULL){
                if(strlen(temp) > 0 && strcmp(temp, "exit") == 0){
                    strcpy(s, temp);
                    goto endLoop;
                }
            }
        }else if(s[0] == '!' && strlen(s) > 1){
            char * s2 = s + 1;
            int sInt = atoi(s2);
            if(sInt <= historyList->size){
                temp = executeIndex(historyList, executeCommand, sInt, printCommand, histCount, histFileCount);
                if(temp != NULL){
                    if(strlen(temp) > 0 && strcmp(temp, "exit") == 0){
                        strcpy(s, temp);
                        goto endLoop;
                    }
                }
            }
        }else if(strstr(s, "unalias") != NULL){
            if(strlen(s) <= 6) {
                printf("Invalid unalias\n");
            }else{
                char * line = s + 8;
                MyAlias * alias2 = inList(line, aliasList);
                if(alias2 != NULL){
                    removeItem2(aliasList, alias2, cleanAlias, compareAlias);
                }else{
                    printf("Alias not found\n");
                }
            }
        }else if(strstr(s, "alias") != NULL){
            if(strlen(s) <= 6){
                printf("No command for alias\n");
            }else{
                MyAlias * alias;
                if(inList(s, aliasList) != NULL){
                    alias = inList(s, aliasList);
                    free(alias->realCmd);
                    alias->realCmd = NULL;
                    char * saveptr;
                    char copy[MAX];
                    strcpy(copy, s);
                    char * line = copy + 6;

                    char * token = strtok_r(line, "=\"", &saveptr);
                    token = strtok_r(NULL, "=\"", &saveptr);
                    alias->realCmd = buildCommand(token);
                    printf("Alias added.\n");
                }else{
                    alias = buildAlias(s);
                    addLast2(aliasList, buildNode_Type(alias));
                    printf("Alias added.\n");
                }
            }
        }else if (strstr(s, "&") != NULL) {
            char run[MAX];
            char * saveptr;
            strcpy(run, s);
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
        }else if(strstr(s, ">") != NULL){
            if(strlen(s) <= 4){
                printf("Invalid use of redirect\n");
            }else{
                redirectStdOut(s);
            }
        }else{
            pipeCount = containsPipe(s);
            if(pipeCount == 1){
                prePipe = parsePrePipe(s, &preCount);
                postPipe = parsePostPipe(s, &postCount);
                pipeIt(prePipe, postPipe);
                clean(preCount, prePipe);
                clean(postCount, postPipe);
            }
            else if(pipeCount == 2) {
                prePipe = parsePrePipe(s, &preCount);
                midPipe = parseMidPipe(s, &midCount);
                postPipe = parsePostPipe2(s, &postCount);
                pipeIt2(prePipe, midPipe, postPipe);
                clean(preCount, prePipe);
                clean(midCount, midPipe);
                clean(postCount, postPipe);
            }else if(pipeCount > 2){
                printf("Invalid command; more than 2 pipes\n");
            }else {
                argc = makeargs(s, &argv);
                if (argc != -1)
                    forkIt(argv);

                clean(argc, argv);
                argv = NULL;
            }
        }

        addLast(historyList, buildNode_Type(command), cleanCommand, histFileCount);
        printf("command?: ");
        fgets(s, MAX, stdin);
        strip(s);
        command = buildCommand(s);
    }// end while

    endLoop: addLast(historyList, buildNode_Type(command), cleanCommand, histFileCount);

    poshHist = fopen(".posh_history", "w");
    addHistory(poshHist, historyList, printCommand);
    fclose(poshHist);
    poshHist = NULL;

    clearList(aliasList, cleanAlias);
    free(aliasList);
    aliasList = NULL;
    clearList(someList, cleanCommand);
    free(someList);
    someList = NULL;
    clearList(historyList, cleanCommand);
    free(historyList);
    historyList = NULL;

    return 0;

}// end main