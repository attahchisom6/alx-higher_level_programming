#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_number - function to print numbers, separated by
 * a string
 * @separator:string to separate the numbers
 * @n:first argument
 * @...:othser arguments
 *
 * Return:void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int k, p;

	va_list(ap);

	if (separator == NULL)
		return;

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
	va_end(ap);
	printf("\n");
}

int main(void)
{
	print_numbers(", ", 4, 0, 98, -1024, 402);
	return (0);
}

