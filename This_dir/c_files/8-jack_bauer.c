#include "main.h"

/**
 * jack_bauer-function to print the time of jack bauer
 * starting from 00:00 to 23:59
 */

void jack_bauer(void)
{
	int p, q;

	for (p = 0; p <= 23; p++)
	{
		for (q = 0; q <= 59; q++)
		{
			
			
				_putchar((p / 10) + '0');
				_putchar((p % 10) + '0');
				_putchar(':');
				_putchar((q / 10) + '0');
				_putchar((q % 10) + '0');
				_putchar('\n');
				
			
		}
	}
}

int main(void)
{
	jack_bauer();
	return (0);
}
