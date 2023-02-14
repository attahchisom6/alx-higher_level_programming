#include "holberton.h"
/**
 * print_line - calls function
 * @n: input
 * Description: Function the draws a
 * straight line in the terminal.
 * Return: 0
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	if (n <= 0)
	{
		_putchar ('\n');
	}
}
