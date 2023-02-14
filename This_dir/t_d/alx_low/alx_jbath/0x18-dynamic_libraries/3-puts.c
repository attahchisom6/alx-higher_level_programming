#include "holberton.h"
/**
 * _puts - calls function
 * @str: string to print
 * Description: Function that prints a string,
 * followed by a new line, to stdout.
 * Return: 0
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar (*str);
		str++;
	}
	_putchar ('\n');

}
