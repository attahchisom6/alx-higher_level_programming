#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/wait.h>
#include <stddef.h>

ssize_t _get_line(char *buffer, size_t size, FILE *stream);
char *my_strtok(char *str, char *delim);
char *_getenv(const char *usr_str);
char *_strtok(char *str, char *delm);
int _setenv(const char *name, const char *value, int overwrite);

#endif
