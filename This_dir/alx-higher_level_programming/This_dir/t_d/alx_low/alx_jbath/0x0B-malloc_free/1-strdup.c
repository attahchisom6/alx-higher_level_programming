#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_strdup - Function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a parameter.
 * @str: Array passed by main
 *
 * Return: Array
 */
char *_strdup(char *str)
{
	int strlen;
	int n, i = 0;
	char *dest;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		strlen++;
		i++;
	}
	dest = malloc(sizeof(char) * (strlen + 1));

	if (dest == NULL)
		return (NULL);

	for (n = 0; str[n] != '\0'; n++)
	{
		dest[n] = str[n];
	}
	return (dest);
}
