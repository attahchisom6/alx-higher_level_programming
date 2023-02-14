#include "variadic_functions.h"
/**
 * sum_them_all - calls function
 * @n: ints passed by main
 * Description: Function that returns the sum of all its parameters.
 * Return: Sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list sum;

	int total = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(sum, n);

	for (i = 0; i < n; i++)
		total += va_arg(sum, int);

	va_end(sum);
	return (total);
}
