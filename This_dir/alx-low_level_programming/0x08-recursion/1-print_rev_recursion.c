#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - function to recursively reverse
 * a string
 * @s:string to be reversed
 * Return:void
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')/*when at end of string*/
		return;

/*print next word after the end of string*/
	_print_rev_recursion(s + 1);
		_putchar(*s);
}
