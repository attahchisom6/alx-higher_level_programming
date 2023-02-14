#include "holberton.h"
/**
  * clear_bit - function that sets the value of a bit to 0 at a given index
  * @n: pointer
  * @index: is the index
  * Return: 1 if it worked, -1 if fail
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	*n = *n & ~(1ul << index);
	return (1);
}
