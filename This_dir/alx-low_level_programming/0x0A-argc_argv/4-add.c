#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - function to print even numbers
 * @argc:No of argument passed to function
 * @argv:array of arguments
 *
 * Return:0
 */

int main(int argc, char *argv[])
{
	int k, p, sum;

	for (k = 1; k < argc; k++)
	{
		for (p = 0; argv[k][p] != '\0'; p++)
		{
			if (!isdigit(argv[k][p]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[k]);
	}
	printf("%d\n", sum);

	return (0);
}
