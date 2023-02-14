#include "variadic_functions.h"
/**
 * print_numbers - calls function
 * @separator: string to be printed between numbers
 * @n: number of integers passed to function
 * Description: Function that prints numbers, followed by a new line.
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list print;
	unsigned int i;
	int args;

	va_start(print, n);

	for (i = 0; i < n; i++)
	{
		args = va_arg(print, int);
		{
		if (i != 0 && separator == NULL)
		printf("%s", separator);
		printf("%d", args);
		}
	}
	printf("\n");
	va_end(print);
}
