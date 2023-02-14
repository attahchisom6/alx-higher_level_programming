#include <stdio.h>
/**
 * main-function main
 * Return:0;
 */

int main(void)
{
	int p, q, r, t;
	for (r = 48; r <= 57; r++)
	{
		for (t = 48; t <= 56; t++)
		{

	for (p = 48; p <= 57; p++)
	{
		for (q = 49; q <= 57; q++)
		{
				putchar(r);
				putchar(t);
				putchar(32);
				putchar(p);
				putchar(q);
				if (p != 57 || q != 57)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
		
	}
	putchar('\n');
	return (0);
}
