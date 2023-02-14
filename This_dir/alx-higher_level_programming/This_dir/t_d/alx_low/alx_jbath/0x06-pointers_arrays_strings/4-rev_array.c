#include "holberton.h"
/**
 * reverse_array - calls function
 * @a: pointer
 * @n: variable
 * Description: Function that prints a string,
 * followed by a new line, to stdout.
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int tmp;
	int *end = a + n - 1;
	int *p;

	for (p = a; a < end; a++, end--)
	{
		tmp = *a;
		*a = *end;
		*end = tmp;
	}
	a = p;
}
