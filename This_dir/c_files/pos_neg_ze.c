#include <stdio.h>

/**
 * print_sign-program to print sign of numbers  in the 
 * order of one -one or zero
 * return:result
 */

int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		putchar('-');
		return (-1);
	}
	else 
	{
		putchar(48);
		return (0);
	}
}

int main(void)
{
	int r;

	r = print_sign(8);
	putchar(r + '0');
	return (0);
}
