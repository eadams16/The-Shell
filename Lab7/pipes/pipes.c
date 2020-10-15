#include "../tokenize/makeArgs.h"
#include "pipes.h"

int containsPipe(char *s){
    int count = 0;
    for(int x = 0; x < strlen(s); x++){
        if(s[x] == '|'){
            count++;
        }
    }
	return count;
}// end containsPipe


char ** parsePrePipe(char *s, int * preCount){
    char * saveptr;
    char copy[MAX];
    strcpy(copy, s);
	char * token = strtok_r(copy, "|", &saveptr);
	char ** argv = NULL;
	int total = makeargs(token, &argv);
    *preCount = total;
    return argv;
}// end parsePrePipe


char ** parsePostPipe(char *s, int * postCount){
    char * saveptr;
    char copy[MAX];
    strcpy(copy, s);
    char * token = strtok_r(copy, "|", &saveptr);
    token = strtok_r(NULL, "|", &saveptr);
    char ** argv = NULL;
    int total = makeargs(token, &argv);
    *postCount = total;
    return argv;
}// end parsePostPipe

char ** parsePostPipe2(char *s, int * postCount){
    char * saveptr;
    char copy[MAX];
    strcpy(copy, s);
    char * token = strtok_r(copy, "|", &saveptr);
    token = strtok_r(NULL, "|", &saveptr);
    token = strtok_r(NULL, "|", &saveptr);
    char ** argv = NULL;
    int total = makeargs(token, &argv);
    *postCount = total;
    return argv;
}// end parsePostPipe


char ** parseMidPipe(char *s, int * midCount){
    char * saveptr;
    char copy[MAX];
    strcpy(copy, s);
    char * token = strtok_r(copy, "|", &saveptr);
    token = strtok_r(NULL, "|", &saveptr);
    char ** argv = NULL;
    int total = makeargs(token, &argv);
    *midCount = total;
    return argv;
}// end parsePostPipe


void pipeIt(char ** prePipe, char ** postPipe){
    int status;
    pid_t pid = fork();
    if(pid != 0){
        waitpid(pid, &status, 0);
    }else{
        pid_t pid2;
        int fd[2], res;

        res = pipe(fd);

        if(res < 0)
        {
            printf("Pipe Failure\n");
            exit(-1);
        }// end if

        pid2 = fork();

        if(pid2 != 0)
        {
            close(fd[1]);
            dup2(fd[0], 0);
            close(fd[0]);
            execvp(postPipe[0], postPipe);
            exit(-99);
        }// end if AKA parent
        else
        {
            close(fd[0]);
            dup2(fd[1], 1);
            close(fd[1]);
            execvp(prePipe[0], prePipe);
            exit(-99);
        }// end else AKA child
    }
}// end pipeIt

void pipeIt2(char ** prePipe, char ** midPipe, char ** postPipe){
    int status;
    pid_t pid = fork();
    if(pid != 0){
        waitpid(pid, &status, 0);
    }else{
        pid_t pid2;
        int fd[2], res;

        res = pipe(fd);

        if(res < 0){
            printf("Pipe Failure\n");
            exit(-1);
        }// end if

        pid2 = fork();

        if(pid2 != 0){
            close(fd[1]);
            dup2(fd[0], 0);
            close(fd[0]);
            execvp(midPipe[0], midPipe);
            exit(-99);
        }// end if AKA parent
        else{
            pid_t pid3;
            int ff[2], result;

            result = pipe(ff);

            if(result < 0){
                printf("Pipe Failure\n");
                exit(-1);
            }// end if

            pid3 = fork();

            if(pid3 != 0){
                close(ff[1]);
                dup2(ff[0], 0);
                close(ff[0]);
                execvp(postPipe[0], postPipe);
                exit(-99);
            }// end if AKA grandchild
            else{
                close(ff[0]);
                dup2(ff[1], 1);
                close(ff[1]);
                execvp(prePipe[0], prePipe);
                exit(-99);
            }// end else AKA greatgranchild
        }// end else AKA child
    }
}// end pipeIt