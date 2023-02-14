#include "holberton.h"
#include <stdio.h>

/**
 * times_table - calls function
 * Description: A function that prints the 9 times table
 * Return: 0
 */
void print_times_table(int n)
{
	int row, col;

	for (row = 0; row < n; row++)
	{
		for (col = 0; col < n; col++)
		{

			if ((col * row) < 20)
			{
				if (col)
				{
					_putchar (' ');
					_putchar (' ');
					_putchar ('0' + n);
				}
			}
			if (n < 20)
			{
				_putchar (' ');
				_putchar ('0' + (n / 10));
				_putchar ('0' + (n % 10));
			}
		}
		_putchar ('\n');
	}
}
