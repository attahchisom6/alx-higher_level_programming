#include <stdio.h>

int main(void)
{
	int p = 589;
	int d = 0, q;

	while (d < p)
	{
		while (q < p)
		{
			p = q * d;
			q++;
		}
		d++;
	}
	printf("disambled prime numver %d * %d = %d", d, q, p);
	return (0);
}
