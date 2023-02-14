#include "main.h"

/**
 * my_strtok - funxtion to split a string into words
 * @str:str to split into words
 * @delim:delimeter character to separate our words
 *
 * Return: array with each splitted word as elemwnt
 */

char *my_strtok(char *str, char *delim)
{
	int k, p = 0;
	static char *string;
	char *word = NULL;

	if (delim == NULL)
		return (NULL);
	if (str == NULL && string == NULL)
		return (NULL);
	if (str != NULL && string != NULL)
		return (NULL);

	if (str == NULL && string != NULL)
		str = string;
	if (str != NULL && string == NULL)
		string = str;

	while (str[p] != '\0')
	{
		if (str[p + 1] == '\0')
		{
			word = string;
			string = NULL;
			return (word);
		}

		if (str[p + 1] == *delim)
			str[p + 1] = '\0';
		p++;
	}
	word = string;
	string = str;
	return (word);
}
