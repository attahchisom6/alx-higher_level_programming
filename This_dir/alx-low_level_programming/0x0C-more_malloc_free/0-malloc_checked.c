#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - A function that allocates memory
 * @b:size of memory to allocate
 *
 * Return:pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *str;

	str = malloc(b);
	if (str ==  NULL)
		exit(98);
	return (str);
}
