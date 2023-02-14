#include "holberton.h"
/**
 * print_alphabet_x10 - calls function
 *
 * Description: Prints alphabet in lower case
 * in 10 rows.
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
char a, b;

	for (a = 1; a <= 10; a++)
	{
		for (b = 'a' ; b <= 'z' ; b++)
		{
		_putchar (b);
		}
	_putchar ('\n');
	}
}
