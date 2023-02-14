#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: arguments passed through command line
 * Description: Program that prints its name,
 * followed by a new line.
 * Return: Always 0 (Success)
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
