#include "holberton.h"

/**
  * print_two - calls function
  * @n: Variable to run through functions.
  * Description: Function that outputs variable n
  * if greater then 10 but less then 100.
  * Return: n
  */
void print_two(int n)
{
	_putchar (',');
	_putchar (' ');
	_putchar (' ');
	_putchar ('0' + n / 10);
	_putchar ('0' + n % 10);
}
