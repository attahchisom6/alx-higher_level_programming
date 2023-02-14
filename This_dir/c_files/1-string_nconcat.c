#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - funtion to measure the lengt of string
 * @str:string to measure
 *
 * return:lengt of string
 */

int _strlen(char *str)
{
	int p;

	p = 0;
	while (str[p] != '\0')
	{
		p++;
	}
	return (p);
}

/**
 * string_nconcat - this function will concertenate a
 * number of strings
 * @s1:destination string
 * @s2:source string to be concertenated with s1
 *
 * Return:pointer to concertenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int k = 0, g, m = 0, p = 0, x;
	char *buffer;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	p = _strlen(s1);
	while (s2[m] != '\0' && m < n)
	{
		k = _strlen(&s2[m]);
		m++;
	}
	if (n > k)
		n = k;
	g = p + n + 1; /*to include the null terminator*/
	buffer = malloc(g * sizeof(char));
	if (buffer == NULL)
		return (0);
	for (x = 0; x < p; x++)
		buffer[x] = s1[x];
	for (; x < (p + n); x++)
		buffer[x] = s2[x - p];
	buffer[x] = '\0';
	return (buffer);
}

int main(void)
{
	char *s;
	char *s1 = "NULL";
	char *s2 = " NULL";

	s = string_nconcat(s1, s2, 3);
	printf("%s\n", s);
	free(s);
	return (0);
}
