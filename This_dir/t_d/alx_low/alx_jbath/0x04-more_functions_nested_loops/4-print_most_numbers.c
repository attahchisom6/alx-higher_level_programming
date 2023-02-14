#include "holberton.h"
/**
 * print_most_numbers - calls function
 *
 * Description: Prints numbers 0 through
 * 9, except 2 and 4.
 * Return: 0
 */

void print_most_numbers(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		if (a != 50 && a != 52)
		_putchar (a);
	}
	_putchar ('\n');
}
