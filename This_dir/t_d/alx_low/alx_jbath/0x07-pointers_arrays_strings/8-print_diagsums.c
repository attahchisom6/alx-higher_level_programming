#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - calls function
 * @a: point to array
 * @size: size of array
 * Description: Write a function that prints the
 * sum of the two diagonals of a square matrix of integers.
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int row;
	int col;
	int sum = 0;

	for (row = 0; row < size; row++)
	{
		for (col = 0; col < size; col++)
		{
			if (row == col)
				sum = sum + *a[row][col];
		}
	}
	printf("%d,", sum);
}
