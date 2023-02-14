#include "main.h"

/**
 * add - function to add two numbers
 * @a:first parameter
 * @b:second parameter
 *
 * Return:sum of the two number
 */

int add(int a, int b)
{
	int sum = 0;

	sum = a + b;
	return (sum);
}

/**
 * sub - function to subtract two integers
 * @a:first parameter
 * @b:second parameter
 *
 * Result:difference between the two number
 */

int sub(int a, int b)
{
	int diff = 0;

	diff = a - b;
	return (diff);
}

/**
 * mul - function to multiply two integers
 * @a:first integer
 * @b:second integer
 *
 * Return:the product of the two numbers
 */

int mul(int a, int b)
{
	int mul = 0;

	mul = a * b;
	return (mul);
}

/**
 * div - funtion to divide two integers
 * @a:first integer
 * @b:second integer
 *
 * Return:the dividend
 */

int div(int a, int b)
{
	int div = 0;

	div = a / b;
	return (div);
}

/**
 * mod - gets the remainder between two numbers
 * @a:first number
 * @b:second number
 *
 * Return:the remainder from the two numbers division
 */

int mod(int a, int b)
{
	int remainder = 0;

	remainder = a % b;
	return (remainder);
}
