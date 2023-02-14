#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - calculate lengt of a string by recursion
 * @s:test string
 * Return:lengt of string
 */

int _strlen_recursion(char *s)
{
	int p;

	p = 0;
	if (*s != '\0')
	{
		p += _strlen_recursion(s + 1);
		p++;
	}
	return (p);
}
