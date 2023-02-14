#include <stdio.h>
/**
 * main - entry point
 *
 * Description: Prints all possible combinations
 * of single-digit numbers, followed by a new line
 * using only putchar
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
			putchar(a);
			putchar(b);
			if (!(a == 57 && b == 57))
			{
			putchar(44);
			putchar(32);
			}
		}
	}
	putchar('\n');
return (0);
}
