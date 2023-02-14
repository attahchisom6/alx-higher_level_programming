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
		for (row = 1; row <= n; row++)
		{
			for (col = 1; col <= n; col++)
			{
				_putchar ('#');
			}
		}
		_putchar ('\n');

}
