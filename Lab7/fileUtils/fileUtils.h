#ifndef FILEUTILS_H
#define FILEUTILS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../linkedlist/linkedList.h"

#define MAX 100

int readHistCount(FILE * fin);
int readHistFileCount(FILE * fin);
void checkAlias(LinkedList * aliasList, FILE * fin);
void loadHistory(FILE * fin, LinkedList * linkedList, int fileCount);
void addHistory(FILE * fin, LinkedList * linkedList, char * (* convertData)(void *));
int removeWhitespace(char * line);
void redirectStdOut(char * s);

#endif