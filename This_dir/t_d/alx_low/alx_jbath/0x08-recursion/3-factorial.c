#include "holberton.h"
/**
 * factorial - calls function
 * @n: original string
 * Description: Function that prints a string,
 * followed by a new line.
 * Return: 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	if (n > 1)
	{
		return (n * factorial(n - 1));
	}
	return (0);
}
