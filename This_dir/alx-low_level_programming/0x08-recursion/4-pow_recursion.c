#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - function to raise the value of x to the
 * power of y
 * @x:base number
 * @y:index or power number
 * Return:value of x to power of y
 */

int _pow_recursion(int x, int y)
{
	int result;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y > 0)
	{
		result = x * _pow_recursion(x, y - 1);
		return (result);
	}
	return (x);
}
