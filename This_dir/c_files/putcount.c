#include <stdio.h>

int main(void)
{
	int k;

	for (k = 0; k <= 9; k++)
	{
		putchar(k + '0');
		if (k != 9)
		{
		putchar (44);
		putchar(32);
		}
	}
	return (0);
}
