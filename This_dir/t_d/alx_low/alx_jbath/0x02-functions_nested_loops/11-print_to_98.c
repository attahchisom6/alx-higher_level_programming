#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - calls function
 * @n: integer passed from main
 * Description: Function that prints all natural numbers from
 * n to 98, follwed by a newline.
 * Return: 0
 */
void print_to_98(int n)
{
	int i = n;

	if (n <= 98)
	{
		for (; i <= 98; ++i)
		{
			if (i != 98)
				printf("%d, ", i);
			if (i == 98)
				printf("%d\n", i);
		}
	}
	if (n > 98)
	{
		for (; i >= 98; --i)
		{
			if (i == 98)
				printf("%d\n", i);
			if (i != 98)
				printf("%d, ", i);
		}
	}
}
