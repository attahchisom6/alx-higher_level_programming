#include <stdio.h>

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar((i / 10) + '0');
	}
	putchar('\n');
	return(0);
}
