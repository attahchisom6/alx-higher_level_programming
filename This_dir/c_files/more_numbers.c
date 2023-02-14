#include <stdio.h>

void more_numbers(void)
{
	int p, q;

	for (p = 1; p <= 10; p++)
	{
		for (q = 0; q <= 14; q++)
		{
			putchar(q + '0');
		}
		putchar('\n');
	}
}

int main(void)
{
	more_numbers();
	return (0);
}
