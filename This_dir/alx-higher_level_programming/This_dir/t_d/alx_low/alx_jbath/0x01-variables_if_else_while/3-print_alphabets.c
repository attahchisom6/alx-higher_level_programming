#include <stdio.h>
/**
 * main - entry point
 *
 * Description: Prints alphabet in lower
 * then upper case
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;
char ch;

for (c = 97 ; c < 123 ; c++)
{
putchar (c);
}
for (ch = 65 ; ch < 91 ; ch++)
{
putchar (ch);
}
putchar ('\n');
return (0);
}
