#include "holberton.h"
/**
 * print_square - calls function
 * @size: input
 * Description: Function that draws
 * a square.
 * Return: 0
 */
void print_square(int size)
{
	int row;
	int col;

	if (size < 1)
	{
		_putchar ('\n');
	}
		for (row = 1; row <= size; row++)
		{
			for (col = 1; col <= size; col++)
			{
				_putchar ('#');
			}
			_putchar ('\n');
		}
}
