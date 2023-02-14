#include <stdio.h>
/**
 * main - entry point
 *
 * Description: Prints all single digit numbers
 * of base 10 starting from 0, followed by a new line
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
	putchar(a);
	}
	for (b = 97; b <= 102; b++)
	{
	putchar(b);
	}
	putchar('\n');
return (0);
}
