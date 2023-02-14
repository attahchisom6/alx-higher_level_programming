#include "holberton.h"
#include <stdio.h>

/**
 * print_array - calls function
 * @n: element of array to print
 * @a: array to reference
 * Description: Write a function that prints n elements
 * of an array of integers, followed by a new line.
 * Return: 0
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", a[i]);
	}
	if (n != 0)
	{
	printf("%d", a[n - 1]);
	}
	printf("\n");
}
