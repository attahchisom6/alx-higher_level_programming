#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - functio to print multiplication of two numbers
 * @argc:No. of arguments
 * @argv:array of argument pased
 *
 * Return:0
 */

int main(int argc, char *argv[])
{
	int k, m, p;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	if (argc == 3)
	{
		k = atoi(argv[1]);
		m = atoi(argv[2]);
		p = k * m;
		printf("%d\n", p);
	}

	return (0);
}
