#include "holberton.h"
/**
 * print_chessboard - calls function
 * @a: original string
 * Description: Function that prints a string,
 * followed by a new line, to stdout.
 * Return: 0
 */
void print_chessboard(char (*a)[8])
{
	int row;
	int column;

	for (row = 0; row < 8; row++)
	{
		for (column = 0; column < 8; column++)
		{
			_putchar (a[row][column]);
		}
		_putchar ('\n');
	}
}
