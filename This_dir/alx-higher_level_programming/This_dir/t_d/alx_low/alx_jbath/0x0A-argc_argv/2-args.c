#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - entry point
 * @argc: argument count
 * @argv: arguments passed through command line
 * Description: Program that prints its name,
 * followed by a new line.
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
