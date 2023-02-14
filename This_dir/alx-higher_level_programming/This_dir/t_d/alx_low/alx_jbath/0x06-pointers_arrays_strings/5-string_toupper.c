#include "holberton.h"
/**
 * *string_toupper - calls function
 * @str: original string
 * Description: Function that changes Upper to
 * lower case chars.
 * followed by a new line, to stdout.
 * Return: 0
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (*(str + i) >= 97 && *(str + i) <= 122)
		{
			*(str + i) = *(str + i) - 32;
		}
		i++;
	}
	return (str);
}
