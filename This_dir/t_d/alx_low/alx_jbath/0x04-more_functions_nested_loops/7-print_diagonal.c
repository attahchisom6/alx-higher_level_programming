#include "holberton.h"
/**
 * print_diagonal - calls function
 * @n: input
 * Description: Function that draws
 * a diagonal line on the terminal.
 * Return: 0
 */
void print_diagonal(int n)
{
	int row;
	int col;

	if (n <= 0)
	{
		_putchar ('\n');
	}
	if (n > 0)
		for (row = 0; row <= n - 1; row++)
	{
		for (col = 0; col <= row - 1; col++)
		{
			_putchar (' ');
		}
		_putchar ('\\');
		_putchar ('\n');
	}
}

