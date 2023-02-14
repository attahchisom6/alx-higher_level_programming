#include <stdio.h>
/**
 * main - entry point
 *
 * Description: Prints alphabet in lower case
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;

for (c = 'a' ; c <= 'z' ; c++)
{
putchar (c);
}
putchar ('\n');
return (0);
}
