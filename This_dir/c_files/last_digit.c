#include "main.h"

/**
 * print_last_digit-this prints the last digit of a given number
 * return:last_digit
 */

int last_digit(int n)
{
	int last_number;

	last_number = n % 10;
	return (last_number);
}

int main(void)
{
	int k;

	k = last_digit(567);
	_putchar(k + '0');
	_putchar('\n');
	
	k = last_digit(139);
	_putchar(k + '0');
	_putchar('\n');
	return (0);
}

