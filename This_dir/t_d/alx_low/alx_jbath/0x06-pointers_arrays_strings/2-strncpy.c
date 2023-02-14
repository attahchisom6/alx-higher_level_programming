#include "holberton.h"
/**
 * *_strncpy - calls function
 * @dest: string to print
 * @src: second string
 * @n: input
 * Description: Function that copies a string.
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
