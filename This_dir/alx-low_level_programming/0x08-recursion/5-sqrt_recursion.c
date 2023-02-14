#include "main.h"
#include <stdio.h>

/**
 * searcher - a function to search and get a number whose square
 * is less than or equal to test number
 * @y:test number, whose square root we want
 * @x:try number whose square will be compared to y
 * to see if its equal
 * Return:try number
 */

int searcher(int x, int y)
{
	if (x * x > y)
		return (-1);
	if (x * x == y)
		return (x);
	if (x * x < y)
	{
		int p;

		p = searcher(x + 1, y);
		return (p);
	}
	return (1);
}



/**
 * _sqrt_recursion - function to get the square root of a
 * natural number
 * @n:number whose square root we are lookingcfor
 * Return:square root of n
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (searcher(1, n));
}
