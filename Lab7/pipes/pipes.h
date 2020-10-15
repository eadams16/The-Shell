#ifndef PIPES_H
#define PIPES_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

int containsPipe(char *s);
char ** parsePrePipe(char *s, int * preCount);
char ** parsePostPipe(char *s, int * postCount);
char ** parseMidPipe(char *s, int * postCount);
void pipeIt(char ** prePipe, char ** postPipe);
void pipeIt2(char ** prePipe, char ** midPipe, char ** postPipe);
char ** parsePostPipe2(char *s, int * postCount);


#endif 
