#include <stdio.h>
#include "holberton.h"

/**
  * main - prints the largest of 3 integers
  * Return: 0
  */

int main(void)
{
	int a, b, c;
	int largest;

	a = 98347;
	b = 98346;
	c = 98345;

	largest = largest_number(a, b, c);
	printf("%d is the largest number\n", largest);

	return (0);
}
