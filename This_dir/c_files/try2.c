#include <stdio.h>

int main(void)
{
	int n, m;
	
	for (n = 0; n <= 98; n++)
	{
		for (m = 1; m <= 99; m++)
		{
			if (m >= n && m != n)
			{
			putchar((n/10) + '0');
		
			putchar((n%10) + '0');
		
			putchar(32);
		
			putchar((m/10) + '0');
		
			putchar((m%10) + '0');
		
			if (m != 99 || n != 98)
			{
				putchar(44);
				putchar(32);
			}
			}
		}
	}
	putchar('\n');
	return (0);
}
