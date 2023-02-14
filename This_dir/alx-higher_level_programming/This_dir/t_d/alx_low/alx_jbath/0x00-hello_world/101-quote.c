#include<stdio.h>
#include<unistd.h>

/**
 * main - entry point
 *
 * Description: prints characters in an array
 * without using printf or putc
 * Return: Always 1 (Success)
 */
int main(void)
{
write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
