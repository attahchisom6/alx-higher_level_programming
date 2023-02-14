#include "holberton.h"

/**
  * print - calls function
  * @n: Variable to run through functions.
  * Description: Function that calls three functions
  * to output times tables.
  */
void print(int n)
{
	if (n < 10)
		print_one();
	else if (n < 100)
		print_two();
	else
		print_three();
}
