#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - function to sum all the argument passed to it
 * @n:first argument
 * @...:all other argument
 *
 * Return:void
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int k, sum = 0;

	va_list(ap);

	if (n == 0)
		return (0);

	va_start(ap, n);
	k = 0;
	while (k < n)
	{
		sum = sum + va_arg(ap, int);
		k++;
	}
	va_end(ap);
	return (sum);
}
