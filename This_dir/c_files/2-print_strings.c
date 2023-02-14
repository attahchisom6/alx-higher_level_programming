#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - funcfion to print strings passed to it
 * separated by a constant string
 * @separator:the constant to separate the given string
 * @n:number of strings passed to function
 * @...:unknown argument of strings passed
 *
 * Return:void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int k;
	char *s;

	va_list str; /*u can choose this to be anything ap, fd, etc*/

	va_start(str, n);
	k = 0;
	while (k < n)
	{
		s = va_arg(str, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (separator != NULL && k < (n - 1))
		{
			printf("%s", separator);
		}
		k++;
	}
	printf("\n");
	va_end(str);
}

int main(void)
{
	print_strings(", ", 2, NULL, "dear");
	return (0);
}
