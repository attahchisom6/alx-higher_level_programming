#include <stdio.h>

void line(int n)
{
	int k;

	for (k = 1; k <= (n + 1); k++)
	{
		if (k <= 0)
		{
			putchar('$');
		}
		else if (k > 0)
		{
			putchar('_');
			if (k ==  (n + 1))
			{
				putchar('$');
			}
		}
	}
	putchar('\n');
}


int main(void)
{
	int j;
	j = 0;
	line(j);
	return (0);
}
