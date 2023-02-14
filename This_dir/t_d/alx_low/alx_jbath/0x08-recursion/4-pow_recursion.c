#include "holberton.h"
/**
 * _pow_recursion - calls function
 * @x: input from main
 * @y: input from main
 * Description: Function that returns the value of x
 * raised to the power of y.
 * Return: 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (_pow_recursion(x, y - 1) * x);
}
