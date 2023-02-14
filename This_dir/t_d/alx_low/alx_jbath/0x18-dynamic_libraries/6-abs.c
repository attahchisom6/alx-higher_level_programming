#include "holberton.h"
/**
 * _abs - calls function
 * @n: Integer to be computed
 * Description: Function that computes the
 * absolute value of an integer.
 * Return: 0
 */
int _abs(int n)
{
	if (n < 0)
		n = n * -1;
	return (n);
}
