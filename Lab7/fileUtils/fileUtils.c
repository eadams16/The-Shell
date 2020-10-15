#include <unistd.h>
#include <wait.h>
#include <fcntl.h>
#include "../tokenize/makeArgs.h"
#include "fileUtils.h"
#include "../utils/myUtils.h"
#include "../linkedlist/linkedList.h"
#include "../linkedlist/listUtils.h"
#include "../myCommand/myCommand.h"
#include "../myAlias/myAlias.h"

int readHistCount(FILE * fin){
    int histCount;
    char line[MAX];
    fgets(line, MAX, fin);
    strip(line);

    char * line2 = line + 10;
    histCount = atoi(line2);
    return histCount;
}

int readHistFileCount(FILE * fin){
    int histFileCount;
    char line[MAX];
    fgets(line, MAX, fin);
    fgets(line, MAX, fin);
    strip(line);

    char * line2 = line + 14;
    histFileCount = atoi(line2);
    return histFileCount;
}

void checkAlias(LinkedList * aliasList, FILE * fin){
    char line[MAX];
    int count = 0;
    while(count <= 3){
        fgets(line, MAX, fin);
        count++;
    }
    strip(line);
    MyAlias * alias = buildAlias(line);
    addLast2(aliasList, buildNode_Type(alias));
    while(!feof(fin)){
        fgets(line, MAX, fin);
        strip(line);
        alias = buildAlias(line);
        addLast2(aliasList, buildNode_Type(alias));
    }
}

void loadHistory(FILE * fin, LinkedList * linkedList, int fileCount){
    char line[MAX];

    while(!feof(fin)){
        fgets(line, MAX, fin);
        strip(line);
        MyCommand * command = buildCommand(line);
        addLast(linkedList, buildNode_Type(command), cleanCommand, fileCount);
    }
}

void addHistory(FILE * fin, LinkedList * linkedList, char * (* convertData)(void *)){
    Node * cur = linkedList->head->next;
    int count = 1, num = 0;
    while(cur != NULL){
        if(cur->next != NULL){
            num = removeWhitespace(convertData(cur->data));
            fprintf(fin, "%s\n", (convertData(cur->data) + num));
        }else{
            fprintf(fin, "%s", convertData(cur->data));
        }
        cur = cur->next;
        count++;
    }
}

int removeWhitespace(char * line){
    char * x = line;
    int count = 0;
    while(x[count] == ' '){
        count++;
    }
    return count;
}

void redirectStdOut(char * s){
    char * saveptr;
    char copy[MAX];
    int status;
    strcpy(copy, s);
    char * token = strtok_r(copy, ">", &saveptr);
    char ** argv = NULL;
    int total = makeargs(token, &argv);
    printf("preSymbol: ");
    printargs(total, argv);

    strcpy(copy, s);
    char * token2 = strtok_r(copy, ">", &saveptr);
    token2 = strtok_r(NULL, ">", &saveptr);
    char ** argv2 = NULL;
    total = makeargs(token2, &argv2);
    printf("postSymbol: ");
    printargs(total, argv2);

    pid_t pid = fork();
    if(pid != 0){
        waitpid(pid, &status, 0);
    }else{
        /*int fd = open(argv2[0], O_WRONLY, O_CREAT);
        dup2(fd, 1);
        execvp(argv[0], argv);
        write(fd, argv[0], strlen(argv[0]));
        close(fd);*/
        printf("Redirect stdout unavailable.\n");
    }
}