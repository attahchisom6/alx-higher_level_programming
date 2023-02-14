#ifndef MOSE_MONTY_H
#define MOSE_MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * struct stack_s - a double linked list
 * @n:integer to add in each stack or queue
 * @next;pointer to the next node
 * @prev:pointer to the previous node
 *
 * Description:a doubly linked list to handle stack and queues
 */

typedef struct stack_s
{
	int n;
	struct stack_s *next;
	struct stack_s *prev;
} stack_m;

/**
 * struct instruction_s - structure to handle opcode instructions
 * @opcode: command/instruction with argument, contained in a file
 * the m extension
 * @f:function dictating the behavoir of the instrucrions on
 * the opcode
 * 
 * Description: function containing opcodes and the functions
 * to handle them
 */

typedef struct instruction_s
{
	char *opcodes;
	void (*f)(stack_m **stack, unsigned int line_number);
} instruct_t;

/**
 * struct global_var_s - a structure handling the global
 * variable
 * @lifo_fifo:determines to add to a stack or a queue
 * @curr_L:the current line number
 * @arg:the second argument in a line
 * @head:pointer to the first node
 * @fd:file descriptor of the given file
 * buffer:a pointer to the string of text read from the file
 *
 * Description:a struct containing variablea to be used by all functions
 */

typedef struct global_var_s
{
	int lifo_fifo;
	unsigned int curr_L;
	char *arg;
	stack_m *head;
	FILE *fd;
	char *buffer;
} vglobal_t;

extern vglobal_t vglob;

/*err_msgs.c*/
int usage_err(void);
int fopen_err(char *filename);
int instruction_err(unsigned int lnum, char *opcodes);
int malloc_err(void);
int push_err(unsigned int lnum);

/*mose.c*/
void free_vglob(void);
void init_vglob(FILE *fd);
FILE *check_file(int ac, char *av[]);

/*get_opcode.c*/
void (*get_opcode(char *cmd_name))(stack_m **, unsigned int);

/*str_functions.c*/
int _strcmp(char *str1, char *str2);
int is_chr(char *str, char c);
char *mose_strtok(char *str, char *delim);

/*doubly_linked_funcs.c*/
stack_m *add_dmonty_list(stack_m **mose, unsigned int lnum);
stack_m *add_dmonty_listend(stack_m **mose, unsigned int lnum);
void free_dmonty_list(stack_m **mose);

/*cmd_funcs.c*/
void mose_push(stack_m **mose, unsigned int lnum);
void mose_pall(stack_m **mose, unsigned int lnum);

#endif
