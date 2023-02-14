#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - Function that concatenates two strings.
 * @s1: First string
 * @s2: Second string
 *
 * Return: Nothing.
 */
char *str_concat(char *s1, char *s2)
{
	char *tmp = s1;
	int i, j;
	int c1, c2, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	c1 = _strlen(s1);
	c2 = _strlen(s2);
	l = c1 + c2;

	tmp = malloc(sizeof(char) * (l + 1));
	if (tmp == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		tmp[i] = s1[i];
	for (j = 0; s2[j]; j++)
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
