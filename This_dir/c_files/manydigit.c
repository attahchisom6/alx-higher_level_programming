#include <stdio.h>

void more_numbers(void)
{
	int k;
	int p;
	char num;

	
	for (p = 1; p  <= 10; p++)
	{
		for (k = 0; k <= 14; k++)
		{
			if (k >= 10)
			
				putchar((k / 10) + '0');
				putchar((k % 10) + '0');
			
			
		}
		putchar('\n');
	}
}

int main(void)
{
	more_numbers();
	return (0);
}
