#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - A function that will concertenale all the arguments
 * provided to it separated by a new line
 * @ac:Number of argument provided
 * @av:vector or array containing all this argument
 *
 * Return:pointer to new comcertenated strings of argument
 */
char *argstostr(int ac, char **av)
{
	int k, p, q, r;
	char *str;

	k = 0, p = 0, q = 0, r = 0;
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (p = 0; p < ac; p++) /*get the lenght of all the strings in the matrix*/
	{
		for (q = 0; av[p][q] != '\0'; q++)
		{
			k++;
		}
	}
	k = k + ac + 1; /*sum of lenght of strings, newlines and null terminator*/
/* note each string in the array must be appalended with a  newline*/

	str = malloc(k * sizeof(char));
	if (str == NULL) /*check malloc return */
	{
		return (NULL);
	}
	for (p = 0; p < ac; p++)
	{
		for (q = 0; av[p][q] != '\0'; q++)
		{
			str[r] = av[p][q];
			r++;
		}
		str[r] = '\n';
		r++;
	}
	return (str);
}
