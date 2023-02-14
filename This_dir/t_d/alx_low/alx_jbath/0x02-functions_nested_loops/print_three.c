#include "holberton.h"

/**
  * print_three - calls function
  * @n: Variable to run through functions.
  * Description: Function that outputs variable n
  * if greater than 100.
  * Return: n
  */

void print_three(int n)
{
	_putchar (',');
	_putchar (' ');
	_putchar ('0' + n / 100);
	_putchar ('0' + (n % 100) / 10);
	_putchar ('0' + n % 10);
}
