#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: arguments passed through command line
 * Description: Program that multiplies two numbers.
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;
	int product = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			product *= atoi(argv[i]);
		}
		printf("%d\n", product);
	}
	return (0);
}
