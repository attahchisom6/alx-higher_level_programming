#include "main.h"
#include <stdio.h>

/**
 * wildcmp - function to compare two strings
 * @s1:source or test atring
 * @s2:string to compare to test string
 * Return:1 if identical, else return 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 != '\0' && *s2 == '*')
		{
			int g;

			g = wildcmp(s1, s2 + 1);
			return (g);
		}
		return (*s2 == '\0');
	}
	if (*s2 == '*')
	{
		int h;

		h = wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1);
		return (h);
	}

	if (*s1 == *s2)
	{
		int x;

		x = wildcmp(s1 + 1, s2 + 1);
		return (x);
	}
	return (0);
}
