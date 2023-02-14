#include "holberton.h"
#include <stdio.h>

/**
 * times_table - calls function
 * Description: A function that prints the 9 times table
 * Return: 0
 */
void times_table(void)
{
	int row, col;

	for (row = 0; row < 10; row++)
	{
		for (col = 0; col < 10; col++)
		{
			int n = row * col;

			if (n < 10)
			{
				if (col)
				{
					_putchar (' ');
					_putchar (' ');
					_putchar ('0' + n);
				}
			}
			if (n > 9)
			{
				_putchar (' ');
				_putchar ('0' + (n / 10));
				_putchar ('0' + (n % 10));
			}
			if (col < 9 && col != 0)
			{
				_putchar (',');
			}
			if (col == 0)
			{
				_putchar ('0');
				_putchar (',');
			}
		}
		_putchar ('\n');
	}
}
