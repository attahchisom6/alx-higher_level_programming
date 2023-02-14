#ifndef _VARIADIC_FUNCTIONS_H
#define _VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdarg.h>

void _putchar(char);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

void op_char(va_list list);
void op_int(va_list list);
void op_float(va_list list);
void op_char_ptr(va_list list);
/**
 *struct ops - struct of functions and flags
 *@c: pointers to char string
 *@ch: pointer to list
 *
 */

typedef struct ops
{
	char *c;
	void (*ch)(va_list);
} op_t;

#endif /* #ifndef _VARIADIC_FUNCTIONS_ */
