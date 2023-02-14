#include "holberton.h"
/**
 * print_triangle - calls function
 * @size: int size of triangle
 * Description: Function that prints a triangle, followed by
 * a new line.
 * Return: 0
 */
void print_triangle(int size)
{
	int row, col;

	if (size < 1)
		_putchar ('\n');
	for (row = size - 1; row >= 0; row--)
	{
		for (col = 0; col < size; col++)
		{
			if (row > col)
				_putchar (' ');
			else
				_putchar ('#');
		}
		_putchar ('\n');
	}
}
