#include "main.h"

/**
 * time_table-this function will print the 9x times table
 */

void times_table(void)
{
	int p, q, r;

	for (p = 0; p <= 9; p++)
	{
		for (q = 0; q <= 9; q++)
		{
			r = p * q;

			if (q == 0)
			{
				_putchar(r + '0');
			}
			if (r <= 9 && q != 0)
			{
				_putchar(44);
				_putchar(32);
				_putchar(32);
				_putchar(r + '0');	
			}

			if (r >= 10)
			{
				_putchar(44);
				_putchar(32);
				_putchar((r / 10) + '0');
				_putchar((r % 10) + '0');
			}
		}
		_putchar('\n');
	}
}

int main(void)
{
	times_table();
	
	return(0);
}
