#include "main.h"
#include <stdlib.h>

/**
 * break_string - function to break a string separated by space or null terminated
 * @str:string to break into words
 * 
 * Return:The broken words
 */

int count_word(char *s)
{
	int w, p, flag;

	flag = 0, w = 0;
	while (s[p] != '\0')
	{
		if (s[p] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
		p++;
	}
	return( w);
}

/**
 * strtow - function to accept a string and break it into worda
 * @str:string to break into words;
 *
 * Return:pointer to each word broken
 */

char **strtow(char *str)
{
	char **buffer, *temp;
	int len, k = 0, p, words = 0, c = 0, start, end;

	len = 0;
	while (str[len] != '\0')
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);
	buffer = malloc((words + 1) * sizeof(char *));
	if (buffer == NULL)
		return (NULL);

	for (p = 0; p <= len; p++)
	{
		if (str[p] == ' ' || str[p] == '\0')
		{
			if (c)
			{
				end = p;
				temp = malloc((c + 1) * sizeof(char));
				if (temp == NULL)
					return (NULL);
				while (start < end)
					*temp++ = str[start++];
				*temp = '\0';
				buffer[k] = temp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = p;
	}
	buffer[k] = NULL;
	return (buffer);
}

void print_tab(char **tab)
{
	int k;

	for (k = 0; tab[k] != NULL; ++tab)
	{
		printf("%s\n", tab[k]);
	}
}

int main(void)
{
	char **tab;

	tab = strtow("      ALX  SE  SCHOOL");
	if (tab == NULL)
	{
		printf("Failed execution\n");
		return (1);
	}
	print_tab(tab);
	return (0);
}
