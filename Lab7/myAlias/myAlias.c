#include "myAlias.h"
#include "../pipes/pipes.h"
#include "../tokenize/makeArgs.h"
#include "../process/process.h"
#include "../utils/myUtils.h"
#include "../myCommand/myCommand.h"
#include "../linkedlist/linkedList.h"
#include "../fileUtils/fileUtils.h"

void * buildAlias(char * s){
    char * saveptr;
    char copy[MAX];
    strcpy(copy, s);
    char * line = copy + 6;

    MyAlias * alias  = calloc(1, sizeof(MyAlias));
    char * token = strtok_r(line, "=\"", &saveptr);
    alias->alias = (char *) calloc(strlen(token)+1, sizeof(char));
    strcpy(alias->alias, token);
    token = strtok_r(NULL, "=\"", &saveptr);
    alias->realCmd = buildCommand(token);
    return alias;
}

void cleanAlias(void * ptr){
    MyAlias * temp = (MyAlias *) ptr;
    free(temp->alias);
    temp->alias = NULL;
    cleanCommand(temp->realCmd);
    free(temp);
    temp = NULL;
}


int compareAlias(const void * p1, const void * p2){
    MyAlias * left  = (MyAlias *) p1;
    MyAlias * right  = (MyAlias *) p2;
    return strcmp(left->alias, right->alias);
}