#include "my_shell.h"

/**
 * _memset - fill in a memory area with a constant byte;
 * @buffer:memory area
 * @b:const byte to be filled
 * @n:numver of  bytes to fill into buffer
 *
 * Return:pointer to the memory location
 */

char *_memset(char *buffer, char b, unsigned int n)
{
	size_t p = 0;

	while (p < n)
	{
		buffer[p] = b;

		p++;
	}
	return (buffer);
}

/**
 * _memcpy - this function copies a memory area
 * @src:source memory area to be copied from
 * @dest:Area to recieve the memory
 * @n:number of copies to be made
 *
 * Return:a pointer to the new memories
 */

char *_memcpy(char *dest, const char *src, size_t n)
{
	size_t k = 0;

	while (k < n)
	{
		dest[k] = src[k];

		k++;
	}
	return (dest);
}

/**
 * _strcmp - function to compare the equivalence of two strings
 * @s1:first string
 * @s2:second string
 *
 * Return:non zero value if false and 0 if true
 */

int _strcmp(char *s1, char *s2)
{
	int p, k = 0;

	while (s1[k] == s2[k] && s1[k] != '\0')
	{
		k++;
	}
	p = s1[k] - s2[k];
	
	if (p < 0)
		return (-1);
	else if (p > 0)
		return (1);
	return (0);
}

/**
 * _strdup - this function duplucates a string and assign it a new nemory area
 * @str:str to duplicate
 *
 * Return:a pointer to the new memory area
 */

char *_strdup(const char *str)
{
	char *new;
	char *buffer;
	size_t len;

	len = _strlen(str);
	new = malloc((len + 1) * sizeof(char));
	if (new == NULL)
		return (NULL);
	
	buffer = _memcpy(new, str, len + 1);

	return (buffer);
}

/**
 * cmp_chars - This function will compare character with between a
 * string, substring or another string
 * @str:test string
 * @cmpstr:matching string
 *
 * Return:0 if matched, 1 otherwise
 */

int cmp_chars(char str[], const char*cmpstr)
{
	size_t k, p = 0, match = 0;

	while (str[p] != '\0')
	{
		for (k = 0; cmpstr[k] != '\0'; k++)
		{
			if (str[p] == cmpstr[k])
			{
				match++;
				break;
			}
		}
		p++;
	}
	
	if (p == match)
		return (1);
	return (0);
}
