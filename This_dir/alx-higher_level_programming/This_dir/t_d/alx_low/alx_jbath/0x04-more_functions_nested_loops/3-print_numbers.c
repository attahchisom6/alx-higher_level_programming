#include "holberton.h"
/**
 * print_numbers - calls function
 *
 * Description: Function prints numbers
 * 0 - 9 followed by newline.
 * Return: Always 0 (Success)
 */
void print_numbers(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		_putchar (a);
	}
	_putchar ('\n');
}
