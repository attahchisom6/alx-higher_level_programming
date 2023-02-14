#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function to print the sum of two
 * diagonals of a square matrix
 * @a:pointer to two by two matrix
 * @size:size of the squares
 */

void print_diagsums(int *a, int size)
{
	int p;
	int sum_diag1, sum_diag2;

	sum_diag1 = 0;
	sum_diag2 = 0;

	for (p = 0; p < size; p++)
	{
		sum_diag1 = sum_diag1 + a[p * size + p];
		sum_diag2 = sum_diag2 + a[(p + 1) * size - (p + 1)];
	}
	printf("%d, %d\n", sum_diag1, sum_diag2);
}
