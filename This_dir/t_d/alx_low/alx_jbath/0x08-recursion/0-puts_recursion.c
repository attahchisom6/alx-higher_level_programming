#include "holberton.h"
/**
 * _puts_recursion - calls function
 * @s: original string
 * Description: Function that prints a string,
 * followed by a new line.
 * Return: 0
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar ('\n');
		return;
	}
	_putchar (*s);
	_puts_recursion(s + 1);
}
