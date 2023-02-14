#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * program to convert base 10 to any base
 * @n:number in base 10
 * @base:base to convert to
 *
 * return the convwrted hase
 */

void convertDeci_to(unsigned int n, int base)
{
	unsigned int r;
	int k = 0, p;
	int digit;
	char buffer[100];

	while (n != 0)
	{
		r = n % base;
		digit = r + '0';
		if (digit > '9')
		{
			digit = digit + 7;
		}
		buffer[k] = digit;
		k++;
		n = n / base;
	}
	for (p = k - 1; p >= 0; --p)
		printf("%c", buffer[p]);
	printf("\n");
}

int main(void)
{
	char r;

	convertDeci_to(98, 2);
	return (0);
}
