#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * struct ops - struct of functions and flags
 * @ic: pointer to char string
 * @ch: pointer to list
 */

typedef struct ops
{
	char *ic;
	void (*ch)(va_list);
} ops;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);


#endif /* HOLBERTON_H */

