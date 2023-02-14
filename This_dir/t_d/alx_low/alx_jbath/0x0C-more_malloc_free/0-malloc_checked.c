#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - Function that allocates memory using malloc.
 * @b: value passed by main
 * Return: Pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == 0)
	{
		free(ptr);
		exit(98);
	}
	return (ptr);
}
