#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <unistd.h>






typedef struct builtin
{
	char *name;
	void (*func) (char **args);
}my_build;

typedef struct Aliases
{
	char *real_name;
	char *pname;
	char *(*func) (char **args);
} alias_s;

char *my_readline();
char *aliasp(char **args);
int alias_size();
void my_execute(char **args);
char **my_token(char *buf);
char *my_strcat(char *dest, char *src);
extern char **environ;
void my_exit(char **args);
int num_builtin();
int _strcmp(char *s1, char *s2);
void my_env(char **args);
#endif
