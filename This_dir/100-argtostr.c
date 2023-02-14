#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - A function that will concertenale all the arguments
 * provided to it separated by a new line
 * @ac - Number of argument provided
 * @v:vector or array containing all this argument
 *
 * Rerurn:pointer to new comcertenated strings of argument
 */
char *argtostr(int ac, char **argav)
{
	int k, p, q , r;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	
	str = malloc(argac * sizeof(char));
	if (str == 0) /*Test malloc return*/
	{
		return (NULL);
	}
	for (k == 0; k < argc - 1; k++)
	{
		while (argv[k])
		{
			putchar('\n');
			k++;
		}
		str = argav[k];
	}
	return (str);
}

int
