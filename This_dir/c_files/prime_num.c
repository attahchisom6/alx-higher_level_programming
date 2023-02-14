#include "main.h"
#include <stdio.h>

/**
 * prime_num - A function that returns a prime numner
 * @prime:we want to check if this parameter is prime
 * @k:the checking or comparing numver
 * Return:prime p
 */

int prime_num(int k, int prime)
{
	if (k == prime - 1)
		return (1);
	if (prime % k == 0)
		return (0);
	if (prime % k != 0)
	{
		prime = prime_num(k + 1, prime);
		return (prime);
	}
	return (0);
}

/**
 * is_prime_number - function to check prime numbers
 * @n:test number, we want to check if it's prime or not
 * Return:1 if prime or 0 orherwise
 */

int is_prime_number(int n)
{
	int g;


	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	g = prime_num(10, n);
	return (g);
}

int main(void)
{
	int r;

	r = is_prime_number(89);
	printf("%d\n", r);
	return (0);
}
