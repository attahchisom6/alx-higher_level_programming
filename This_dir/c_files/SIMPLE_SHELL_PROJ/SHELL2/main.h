#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>

typedef struct builtin
{
		char *name;
		void (*func) (char **argv);
} my_build;

char **store_token(char *buffer);
char *read_line(void);
void my_env(char **argv);
void my_exit(char **argv);
extern char **environ;

#endif
