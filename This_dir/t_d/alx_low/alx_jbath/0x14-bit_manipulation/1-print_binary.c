#include "holberton.h"
/**
 * print_binary - Function that prints the binary
 * representation of a number
 * @n: unsigned long int
 */
void print_binary(unsigned long int n)
{
	unsigned int k;
	int c;
	int flag = 1;

	if (n == 0)
		_putchar ('0');

	for (c = 63; c >= 0; c--)
	{
		k = n >> c;

		if (k & 1)
		{
			flag = 0;
			_putchar ('1');
		}
		else if (flag == 0)
			_putchar ('0');
	}
}
