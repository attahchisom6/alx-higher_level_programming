#include "holberton.h"
/**
 * get_endianness - Function that checks the endianness
 *
 * Return: 0
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	if (*c)
		return (*c == 1);
	else
		return (0);
}
