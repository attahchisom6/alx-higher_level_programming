#include "my_shell.h"

/**
 * my_strtok - this function will beak a string into words(tokens)
 * and store each word in an array
 * @str:test string to broken down
 * @delim:parameter to break the string
 *
 * Return:pointer to the tokens
 */

char *my_strtok(char str[], char *delim)
{
	size_t k, p, flag;
	static char *token, *str_end;
	char *str_start;
	
	if (str != NULL)
	{
		/*store the first address of str*/
		token = str;
		/*store the last address of str*/
		p = _strlen(str);
		str_end = &str[p];
	}

	str_start = token;
	/*if the end of str is reached*/
	if (str_start == str_end)
		return (NULL);
	/*start spliting str*/
	for (flag = 0, k = 0; token[k] != '\0'; token++)
	{
		if (token[k] != str_start[k])
			if (token[k - 1] == '\0' && token[k] != '\0')
				break;
		for (p = 0; delim[p] != '\0'; p++)
		{
			if (token[k] == delim[p])
			{
				token[k] = '\0';
				if (token[k] == str_start[k])
					k++; /*ignore*/
				break;
			}
		}
		/*if delim = str*/
		if (token[k] != '\0' && flag == 0)
			flag = 1;
	}
	/*delim = str*/
	if (flag == 0)
		return (NULL);
	return (str_start);
}

/**
 * _isdigit - check whether a string is composed only of numbers
 * @str:test string
 *
 * Return:1 on success, 0 on failure
 */

int _isdigit(char *str)
{
	int p;

	p = 0;
	while (str[p] != '\0')
	{
		if (str[p]  < '0' || str[p] > '9')
			return (0);
		p++;
	}
	return (1);
}

/**
 * rev_str - this function will reverse any given string
 * @string to reverse
 *
 * Return:void
 */

void rev_str(char *str)
{
	int k, p = 0;
	char temp;

	while (str[p] != '\0')
		p++;

	p--;
	for (k = 0; k < p; k++, p--)
	{
		temp = str[k];
		str[k] = str[p];
		str[p] = temp;
	}
}
