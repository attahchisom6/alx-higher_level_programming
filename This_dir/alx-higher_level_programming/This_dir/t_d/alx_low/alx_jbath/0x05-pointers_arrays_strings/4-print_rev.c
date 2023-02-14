#include "holberton.h"
/**
 * print_rev - calls function
 * @s: string to print
 * Description: Function that prints a string in
 * reverse followed by a new line, to stdout.
 * Return: 0
 */

void print_rev(char *s)
{
	int count;

	for (count = 0; s[count] != '\0'; count++)
		;
	while (count--)
		_putchar (s[count]);
	_putchar ('\n');

}
