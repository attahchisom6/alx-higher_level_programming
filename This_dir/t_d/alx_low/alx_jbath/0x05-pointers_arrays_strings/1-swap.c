#include "holberton.h"
/**
 * swap_int - calls function
 * @a: integer 1
 * @b: integer 2
 * Description: Function that swaps the values of two integers.
 *
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;

}
