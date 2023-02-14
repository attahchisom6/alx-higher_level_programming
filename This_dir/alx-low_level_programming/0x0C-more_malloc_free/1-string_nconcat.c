#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - this function will concertenate a
 * number of strings
 * @s1:destination string
 * @s2:source string to be concertenated with s1
 * @n:number of characters to concertenate
 *
 * Return:pointer to concertenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int k = 0, g, p = 0, x;
	char *buffer;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[p] != '\0')
		p++;
	while (s2[k] != '\0')
		k++;
	if (n > k)
		n = k;
	g = p + n + 1; /*to include the null terminator*/
	buffer = malloc(g * sizeof(char));
	if (buffer == NULL)
		return (NULL);
	for (x = 0; x < p; x++)
	{
		buffer[x] = s1[x];
	}
	for (; x < (n + p); x++)
	{
		buffer[x] = s2[x - p];
	}
	buffer[x] = '\0';
	return (buffer);
}
