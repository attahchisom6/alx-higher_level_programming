#include "holberton.h"
/**
 * rev_string - calls function
 * @s: string to print
 * Description: Function that prints a string in
 * reverse followed by a new line, to stdout.
 * Return: 0
 */

void rev_string(char *s)
{
	char *p = s;
	int count;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	s--;

	count = count / 2;

	for (; count > 0; count --, p++, s--)
	{
		int temp = *p;
		*p = *s;
		*s = temp;
	}
}
