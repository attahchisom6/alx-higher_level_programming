#include "monty.h"

/**
 * _strcmp - compares the ascii code in two strings
 * @str1:first string
 * @str2:second string
 *
 * Return: 0 on success, -1 on failure
 */

int _strcmp(char *str1, char *str2)
{
	int k = 0, p;

	while (str1[k] == str2[k] && str1[k] != '\0')
		k++;
	p = str1[k] - str2[k];

	if (p != 0)
		return (-1);
	return (0);
}

/**
 * is_chr - function to search for a character within a string
 * @str:test string
 * @c:character to search in stri g
 *
 * Return: 1 on success, -1 on failure
 */

int is_chr(char *str, char c)
{
	int k = 0;

	while (str[k] != '\0')
	{
		if (str[k] == c)
			return (1);
		k++;
	}
	return (-1);
}

/**
 * mose_strtok - function to break a string into tiken of
 * string and assign pointer to each token
 * @str:string to break
 * @delim:delimeter by which the string has to be broken;
 *
 * Return:pointer to each broken string
 */

char *mose_strtok(char *str, char *delim)
{
	static char *const_str;
	int k = 0, p = 0;

	if (str == NULL)
		str = const_str;

	while (str[k] != '\0')
	{
		/*if the string has only one character or*/
		/*if the string cannot be broken by the given delimeter*/
		if (is_chr(delim, str[k]) == -1 && str[k + 1] == '\0')
		{
			const_str = &str[k + 1];
			*const_str = '\0';
			str = &str[p];
			return (str);
		}

		else if (is_chr(delim, str[k]) == -1 && is_chr(delim, str[k + 1]) == -1)
			k++;
		else if (is_chr(delim, str[k]) == -1 && is_chr(delim, str[k + 1]) == 1)
		{
			const_str = &str[k + 1];
			*const_str = '\0';
			const_str++;
			str = &str[p];

			return (str);
		}
		else if (is_chr(delim, str[k]) == 1)
		{
			k++;
			p++;
		}
	}
	return (NULL);
}
