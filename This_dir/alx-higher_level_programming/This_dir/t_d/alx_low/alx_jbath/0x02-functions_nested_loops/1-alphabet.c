#include "holberton.h"
/**
 * print_alphabet - call function
 *
 * Description: Function prints alphabet
 * in lower case when called.
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
char c;

for (c = 'a' ; c <= 'z' ; c++)
_putchar (c);
_putchar ('\n');
}
