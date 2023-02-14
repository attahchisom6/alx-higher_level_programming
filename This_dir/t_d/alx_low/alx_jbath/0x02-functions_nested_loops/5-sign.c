#include "holberton.h"
/**
 * print_sign - calls function
 * @n: number to be checked
 * Description: Prints the sign of
 * a number.
 * Return: 0, 1, -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
