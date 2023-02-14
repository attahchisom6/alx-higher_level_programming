#include "main.h"

/**
 * main - function to look for a particular file
 * 
 * Return:0 on success
 */

int main(int ac, char **av)
{
	unsigned int k, p;
	struct stat st;
	char *file = "hello.c";

	if (ac < 2)
	{
		printf("Usage: which filename\n");
		exit(1);
	}

	k = 0;
	while (av[k] != NULL)
	{
		p = stat(file, &st);
		if (p == 0)
		{
			printf("%s file FOUND\n", file);
		}
		else if (k == 1)
		{
			printf("%s file not FOUND\n", file);
		}
		k++;
	}
	return (0);
}
