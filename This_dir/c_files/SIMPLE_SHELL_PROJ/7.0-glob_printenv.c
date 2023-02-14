#include "main.h"

/**
 * main - function to print enviroment variables using external
 * variables
 *
 * Return:0 on success
 */

extern char **environ;
int main(int ac, char *av[], char *env[])
{
	size_t k = 0;

	(void)ac;

	environ = env;
	while (env != NULL)
	{
		printf("enviroment variables env[%u]: %s\n", k, env[k]);
		k++;
	}
	return (0);
}
