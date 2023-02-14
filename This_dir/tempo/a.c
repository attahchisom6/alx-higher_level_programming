#include "my_shell.h"
#include <string.h>

/**
 * _strlen:function to calculate the length of a string
 * @str:test string
 *
 * Return:length of string
 */

int _strlen(const char *str)
{
	int p = 0;

	while (str[p] != '\0')
		p++;
	return (p);
}

/**
 * _strcat - function to concertinate two strings
 * @src:source to be added (concertenated)
 * @dest:destination or recieving string
 *
 * Return:pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int p = 0, k;

	while (dest[p] != '\0')
	{
		p++;
	}

	for (k = 0; src[k] != '\0'; k++)
	{
		dest[p] = src[k];
		
		p++;
	}
	dest[p] = '\0';

	return (dest);
}

/**
 * _strcpy - function to copy a string into another string
 * @src:source string
 * @dest:destination string
 * 
 * Return:pointer to the copied string
 */

char *_strcpy(char *dest, char *src)
{
	int p = 0;

	while (src[p] != '\0')
	{
		dest[p] = src[p];
		
		p++;
	}
	dest[p] = '\0';

	return (&dest[p]);
}

/**
 * _strchr - This function locates a character within a string
 * @str:source string
 * @c:character to search within string
 *
 * Return:pointer to the found character
 */

char *_strchr(char *str, char c)
{
	int p = 0;

	while (str[p] != '\0' && str[p] != c)
		p++;
	if (str[p] == c)
		return (&str[p]);
	else
		return (NULL);
}

/**
 * _strspn - function to get number of matching byte of a string
 * to another string
 * @src:source string
 * @accept:the other string, whose bytes are being compared in src
 *
 * Return:pointer to the initial segement of src where bytes from
 * accept occurs
 */

int _strspn(char *src, char *accept)
{
	int k, p = 0, match = 0;

	while (src[p] != '\0')
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (src[p] == accept[k])
			{
				match++;
				break;
			}

/*if there is no match at a point and we have gone through*/
/*the whole string*/
			if (src[p] != accept[k] && accept[k + 1] == '\0')
				return (match);
		}
		p++;
	}
	return (0);
}

int main(void)
{
	int p;

	p = _strspn("hello, World", "oleh");
	printf("%d\n", p);
	return (0);
}
