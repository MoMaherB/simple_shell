#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>

extern char **environ;

int executefun(char **command, char **argv, int idx);
char *_getenv(char *name);
char *_getpath(char *cmd);

char *_itoa(int n);

void errorfun(char *nm, char *command, int i);

/*string functions*/

char *_strdup(const char *str);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
int _strlen(char *str);
int _strcmp(char *str1, char *str2);

void handle_exit(char **cmd, int status);
int handle_env(char **command);

#endif
