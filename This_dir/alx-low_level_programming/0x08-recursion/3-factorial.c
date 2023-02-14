#include "main.h"
#include <stdio.h>

/**
 * factorial - calculates the factorial of any given
 * number less than zero
 * @n:integer parameter, whise value is to be calculated
 * Return:factoraial on n
 */

int factorial(int n)
{
	int result;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	if (n > 0)
	{
		result = n * factorial(n - 1);
		return (result);
	}

	return (n);
}
