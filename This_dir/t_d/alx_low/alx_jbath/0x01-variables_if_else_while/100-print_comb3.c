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
	for (a = 48; a <= 57; a++)
	{
		for (b = 48; b <= 57; b++)
		{
			if (!(a == b || b <= a))
			{
			putchar(a);
			putchar(b);
			if (!(a == 56 && b == 57))
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
