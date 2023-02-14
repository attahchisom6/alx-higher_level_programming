#include <stdio.h>

/**
 * main - function main will display all the argument passed to it
 * @argc:No. of argument passed
 * @argv:array of arguments to be printed
 *
 * Return:0 on success
 */

int main(int argc, char **argv)
{
	int k;

	printf("This function was called by \"%s\"\n", argv[0]);
	
	if (argc > 1)
	{
		for (k = 1; k < argc; k++)
		{
			printf("argv[%d] = %s\n", k, argv[k]);
		}
	}

	return (0);
}
