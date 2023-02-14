#include "holberton.h"
/**
  * flip_bits - Function that returns the number of bits you would need to
  * flip to get from one number to another
  * @n: unsigned long int
  * @m: unsigned long int
  * Return: 0
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0;
	unsigned long int zor;

	zor = n ^ m;

	while (zor)
	{
		if (zor & 1)
			count++;
		zor = zor >> 1;
	}
	return (count);
}
