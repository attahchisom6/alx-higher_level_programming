#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - Function that concatenates two strings.
 * @s1: String 1
 * @s2: String 2
 * @n: Number of bytes
 * Return: 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *tmp = s1;
	unsigned int i, j;
	unsigned int c1, c2, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	c1 = _strlen(s1);
	c2 = n;

	l = c1 + c2;

	tmp = malloc(sizeof(char) * (l + 1));
	if (tmp == NULL)
	return (NULL);
	for (i = 0; s1[i]; i++)
		tmp[i] = s1[i];
	for (j = 0; j < n; j++)
		tmp[i + j] = s2[j];
	tmp[i + j] = '\0';
	return (tmp);
}
/**
 * _strlen - returns the length of a string.
 * @s: character pointer.
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
	char *p = s;

	while (*p != '\0')
	{
		p++;
	}
	return (p - s);
}
