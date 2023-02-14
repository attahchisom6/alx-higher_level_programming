#include "variadic_functions.h"
/**
 * print_strings - calls function
 * @separator: string to be printed between numbers
 * @n: number of strings passed to function
 * Description: Function that prints numbers, followed by a new line.
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list printString;
	unsigned int i;
	char *args;

	va_start(printString, n);
	if (separator == NULL)
		return;

	for (i = 0; i < n; i++)
	{
		args = va_arg(printString, char *);
		while (i != 0)
		{
			printf("%s", separator);
		}
		printf("%s", args);
	}
	printf("\n");
	va_end(printString);
}
