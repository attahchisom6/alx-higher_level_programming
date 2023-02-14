#include <stdio.h>
/**
 * main - entry point
 *
 * Description:
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a;
int b;
int c;

	for (a = 48; a <= 57; a++)
	{
		for (b = 48; b <= 57; b++)
		{
		for (c = 48; c <= 57; c++)
		{
			if (!(a == b || b <= a || c <= b))
			{
			putchar(a);
			putchar(b);
			putchar(c);
			if (!(a == 55 && b == 56 && c == 57))
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
