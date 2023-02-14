#include <stdio.h>
/**
 * main - entry point
 *
 * Description: Prints alphabet in lower
 * case without 'e' and 'q'
 * Return: Always 0 (Success)
 */
int main(void)
{
char a;

for (a = 97 ; a <= 122; a++)
{
if (!(a == 101) && !(a == 113))
putchar (a);
}
putchar ('\n');
return (0);
}
