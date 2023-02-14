#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function to print numbers, separated by
 * a string
 * @separator:string to separate the numbers
 * @n:first argument
 * @...:othser arguments
 *
 * Return:void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int k;

	va_list ap;

	va_start(ap, n);
	k = 0;
	while (k < n)
	{
		printf("%d", va_arg(ap, int));

		if (separator != NULL && k < (n - 1))
		{
			printf("%s", separator);
		}
		k++;
	}
	printf("\n");
	va_end(ap);
}
