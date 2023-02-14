#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - function to print a chessboard
 * @a:pointer to two  by two  array
 */

void print_chessboard(char (*a)[8])
{
	int k, p;

	for (p = 0; p < 8; p++)
	{
		for (k = 0; k < 8; k++)
		{
			_putchar(a[p][k]);
		}
		_putchar('\n');
	}
}
