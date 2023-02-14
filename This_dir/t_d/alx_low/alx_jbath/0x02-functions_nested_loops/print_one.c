#include "holberton.h"

/**
 * print_one - calls function
 * @n: Variable to run through functions.
 * Description: Function that outputs variable n
 * if less then 10.
 * Return: n
 */
void print_one(int n)
{
	if (n > 0)
	{
		_putchar (',');
		_putchar (' ');
		_putchar (' ');
		_putchar (' ');
		_putchar ('0' + n);
	}
	else
		_putchar (n);
}
