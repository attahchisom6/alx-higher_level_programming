#include "main.h"
#include <stdio.h>

/**
 * _strchr - function to search for a character
 * @s:pointer to string
 * @c:charaxter we are aearching for in the string
 * Return:c character when found
 */

char *_strchr(char *s, char c)
{
	int p;

	p = 0;
	while (s[p] != '\0' && s[p] != c)
		p++;
	if (s[p] == c)
		return (&s[p]);
	else
		return (NULL);
}
