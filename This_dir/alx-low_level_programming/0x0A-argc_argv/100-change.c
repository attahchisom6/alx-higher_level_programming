#include <stdio.h>
#include <stdlib.h>

/**
 * main - function to get remainder from a given
 * list of numbers
 * @argc:size of argv
 * @argv:array or list of numbers
 *
 * Return:0
 */

int main(int argc, char *argv[])
{
	int total, change, k;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	total = atoi(argv[1]);
	change = 0;

	if (total < 0)
	{
		printf("0\n");
		return (0);
	}

	for (k = 0; k < 5 && total >= 0; k++)
	{
		while (total >= coins[k])
		{
			change++;
			total -= coins[k];
		}

	}
	printf("%d\n", change);
	return (0);
}
