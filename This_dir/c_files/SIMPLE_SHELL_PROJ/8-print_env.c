#include "main.h"

/**
 * main - function to print the enviroment
 *
 * Return:0
 */

int main(int ac, char **av, char **env)
{
	size_t k = 0;

	while (env[k] != NULL)
	{
		printf("%s\n", env[k]);
		k++;
	}
	return (0);
}

