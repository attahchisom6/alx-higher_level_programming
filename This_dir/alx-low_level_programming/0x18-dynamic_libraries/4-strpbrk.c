#include "main.h"
#include <stdio.h>

/**
 * char *_strpbrk - searches a string for any of a set of bytes
 * @s:test string to be searched
 * @accept:matching string
 *
 * Return:pointet to match if found or null if not
 */

char *_strpbrk(char *s, char *accept)
{
	int k, p;

	p = 0;
	while (s[p] != '\0')
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (s[p] == accept[k])
			{
				s = &s[p];
				return (s);
			}
		}
		p++;
	}
	return (NULL);
}
