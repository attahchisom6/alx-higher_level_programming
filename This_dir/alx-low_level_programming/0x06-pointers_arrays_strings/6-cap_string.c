#include "main.h"
#include <stdio.h>

/**
 * cap_string - A function that capitalizes every
 * character it runs on
 * @s:string variable
 * Return:s result
 */

char *cap_string(char *s)
{
	int k, p;

	char arr[13] = {' ', '\t', '\n', ',', ';', '.',
			'!', '?', '"', '(', ')', '{', '}'};


	for (p = 0; s[p] != '\0'; p++)
	{
		if (p == 0 && s[p] >= 'a' && s[p] <= 'z')
		{
			s[p] = s[p] - 32;
		}

		for (k = 0; k < 13; k++)
		{
			if (s[p] == arr[k])
			{
				if (s[p + 1] >= 'a' && s[p + 1] <= 'z')
				{
					s[p + 1] = s[p + 1] - 32;
				}
			}
		}
	}
	return (s);
}
