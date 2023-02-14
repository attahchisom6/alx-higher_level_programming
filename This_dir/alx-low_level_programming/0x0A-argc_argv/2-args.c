#include "main.h"
#include <stdio.h>

/**
 * main - print the arguments passed to it
 * @argc:No of arguments passed
 * @argv:array of argument to print
 *
 * Return:0
 */

int main(int argc, char *argv[])
{
	int k;

	if (argc > 0)
	{
		for (k = 0; k < argc; k++)
		{
			printf("%s\n", argv[k]);
		}
	}
	return (0);
}

