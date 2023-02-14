#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - function to reallocate a new memory to an old one
 * @ptr:lointer to original size of memory
 * @old_size:orginal size of memory
 * @new_size:new size of memory
 *
 * Return:pointer to new size of memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int k;
	char *copied_buffer, *reallock;

	if (ptr != NULL)
	{
		copied_buffer = ptr;
	}
	else
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);

		return (0);
	}

	reallock = malloc(new_size);
	if (reallock == NULL)
	{
		return (0);
	}
	for (k = 0; k < (old_size || k < new_size); k++)
	{
		reallock[k] = copied_buffer[k];
	}
	free(ptr);

	return (reallock);
}
