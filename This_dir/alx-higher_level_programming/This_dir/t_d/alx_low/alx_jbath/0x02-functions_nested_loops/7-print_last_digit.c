#include "holberton.h"

/**
 * print_last_digit - calls function
 * @r: Integer to be computed
 * Description: Function that prints the
 * last digit of number.
 * Return: r.
 */
int print_last_digit(int r)
{
	r = r % 10;
	if (r < 0)
		r = -r;
	_putchar ('0' + r);
	return (r);
}
