#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function to concercatenate two strings dynamically
 * @s1:first string
 * @s2:second string - string to be concertenated
 *
 * Return:pointer to the concertwnated string
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int p, k, q;
	char *buffer;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	p = 0;
	while (s1[p] != '\0')
	{
		p++; /*read through the destination string*/
/*without null terminator to get lenght of s1*/
	}
	k = 0;
	while (s2[k] != '\0')
	{
		k++; /*get lenght of s2*/
	}
	q = p + k + 1; /*total lenght of concertenated string */
	buffer = malloc(q * sizeof(char));
	if (buffer == 0)
	{
		return (NULL);
	}
	for (p = 0; s1[p] != '\0' ; p++)
	{
		buffer[p] = s1[p];
	}
	for (k = 0; s2[k] != '\0'; k++, p++)
	{
		buffer[p] = s2[k];
	}

	return (buffer);
}
