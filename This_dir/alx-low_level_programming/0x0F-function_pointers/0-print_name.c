#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - this function will print my name, when inputed
 * @name:string of name inputed
 * @f:pointer to function f
 *
 * Return:void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;

	f(name);
}
