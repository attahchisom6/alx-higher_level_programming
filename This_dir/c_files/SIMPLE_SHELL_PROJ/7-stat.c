#include "main.h"

/**
 * main - get the status of a file
 * 
 * Return:0 on success, -1 on failure
 */

int main(int ac, char **av)
{
	unsigned int k;
	struct stat st;

	if (ac < 2)
	{
		printf("Usage: %s PATH_TO_FILE, ...\n", av[0]);
		return (-1);
	}

	k = 1;
	while (av[k] != NULL)
	{
		printf("%s: ", av[k]);
		if (stat(av[k], &st) == 0)
		{
			printf("FOUND\n");
		}
		else
		{
			printf("NOT FOUND\n");
		}
		k++;
	}
	return (0);
}
