#include "holberton.h"
/**
 * *_memset - calls function
 * @s: string to print
 * @b: second string
 * @n: input
 * Description: Function that copies a string.
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
