#include <stdio.h>

/**
 * _strchr - funcrion to locate a character in a string
 * @s:test to check
 * @c:character to look for
 *
 * Return:pointer to the first occurence of the character c in the string s
 * or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int p;

	p = 0;
	while (s[p] != '\0' && s[p] != c)
	{
		p++;
		if (s[p] == c)
			return (&s[p]);
	}
	return (NULL);
}

int main(void)
{
	char str[] = "Hello";
	char *r;
	char c = 'l';


	r = _strchr(str, c);
	if (r != NULL)
	{
		printf("%s\n", r);
	}
	return (0);
}
