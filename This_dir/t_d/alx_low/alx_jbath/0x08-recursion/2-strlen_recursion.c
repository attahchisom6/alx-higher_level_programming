#include "holberton.h"
/**
 * _strlen_recursion - calls function
 * @s: original string
 * Description: Function that returns the length of a string.
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
	return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
