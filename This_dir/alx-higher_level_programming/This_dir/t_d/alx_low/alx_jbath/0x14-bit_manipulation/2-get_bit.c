#include "holberton.h"
/**
 * get_bit - Function that returns the value of a given index
 * @n: unsigned long int
 * @index: is the index
 * Return: the value of the bit at the index or -1 if error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return ((n >> index) & 1);
}
