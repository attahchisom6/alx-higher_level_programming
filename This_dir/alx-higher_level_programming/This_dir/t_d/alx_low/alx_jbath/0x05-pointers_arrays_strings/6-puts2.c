#include "holberton.h"
/**
 * puts2 - calls function
 * @str: string to print
 * Description: Function that prints one char out of 2
 * of a string, followed by a new line.
 * Return: 0
 */

void puts2(char *str)
{
	int count;

	for (count = 0; count < _strlen(str); count += 2)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
}
/**
 * _strlen - calls function
 * @s: variable
 * Description: Function that returns the length of a string.
 *
 * Return: 0
 */

int _strlen(char *s)
{
	int a;

	for (a = 0; *s != '\0'; s++)
		a++;
	return (a);
}
