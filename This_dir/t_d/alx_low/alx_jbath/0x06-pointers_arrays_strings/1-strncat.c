#include "holberton.h"
/**
 * _strncat - calls function
 * @dest: string out
 * @src: pointer to array
 * @n: integer
 * Description: Write a function that concatenates two strin    gs.
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *tmp = dest;
	int i;

	while (*tmp)
	{
		tmp++;
	}
	for (i = 0 ; i < n && *src != '\0' ; i++)
	{
		*tmp = *src;
		src++;
		tmp++;
	}
	return (dest);
}
