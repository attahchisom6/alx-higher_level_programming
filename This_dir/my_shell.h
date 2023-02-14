#ifndef MY_SHELL_H
#define MY_SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <fcntl.h>

extern char **environ;

/**
 * data_s - struct that contains data variables at runtime
 * @av:argument vector
 * @argv:command line arguments
 * @input:user input
 * @_environ:enviroment variable
 * @counter:line counter
 * @status:last status of the shell
 * @pid:process id of the shell
 */

typedef struct data_s
{
	char **av;
	char **argv;
	char *input;
	char **_environ;
	int status;
	int counter;
	char *pid;
} m_data;

/**
 * struct line_list_s - a singly linked list
 * @line:command line argument
 * @next:pointer to the next node
 * 
 * description:a singly linked list that stores command line argument
 */

typedef struct line_list_s
{
	char *line;
	struct line_list_s *next;
} line_t;

/**
 * struct sep_list_s - a singly linked list
 * @sep:character separators like | ; and &
 * next:pointer to the next node
 * 
 * description:a singly linked list that stores the separator used
 * to seoparate arguments
 */

typedef struct sep_list_s
{
	char sep;
	struct sep_list_s *next;
} sep_t;

/**
 * struct var_list_s - a singly linked list
 * @var_len:length of variable
 * @var_value:value of variable
 * @value_len:length of value
 *
 * description:q singly linked list that stores variables
 */

typedef struct var_list_s
{
	int var_len;
	char *var_value;
	int value_len;
	struct var_list_s *next;
} var_t;

/**
 * struct builtin_s - structure containing builtin variables
 * @name:name of the builtin variables
 *
 * description:A struct that stores builtin commands
 */

typedef struct builtin_s
{
	char *name;
	int (*func)(m_data *mshell);
} my_builtin;

/*str_func1.c*/
int _strlen(const char *str);
char *_strcat(char *dest, char *src);
char *_strcpy(char *dest, char *src);
char *_strchr(char *str, char c);
int _strspn(char *src, char *accept);

/*str_functiion2.c*/
char *_memset(char *buffer, char b, unsigned int n);
char *_memcpy(char *dest, const char *src, size_t n);
int _strcmp(char *s1, char *s2);
char *_strdup(const char *str);
int cmp_chars(char str[], const char *cmpstr);

/*str_func3.c*/
char *my_strtok(char str[], char *delim);
int _isdigit(char *str);
void rev_str(char *str);

/*mylib_func.c*/
int get_len(int n);
char  *_itoa(int n);
int _atoi(char *str);

/*reallocs.c*/
void *_realloc(void *ptr, size_t old_size, size_t new_size);
char **_reallocpp(char **ptr, size_t old_size, size_t new_size);

/*list_t.c*/
sep_t *addsep_end(sep_t **head, char sep);
line_t *addline_end(line_t **head, char *line);

/*list2.c*/
var_t *addvar_end(var_t **head, int var_L, char *var_val, int Lval);
void free_var(var_t **head);

/*env1.c*/
int cmp_env(const char *name, const char *penv);
char *_getenv(const char *name, char **_environ);
int print_env(m_data *mshell);

/*1-cmd_exec.c*/
int is_searchable_dir(char *path, int *k);
char *_which(char *cmd, char **_environ);
int is_executable(m_data *mshell);
int perm_dir_err(char *dir, m_data *mshell);
int cmd_exec(m_data *mshell);

#endif
