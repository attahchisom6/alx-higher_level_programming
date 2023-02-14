#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - function to free all the spaces in heap memory
 * due to malloc allocation
 * @d:pointer to struct variable
 *
 * Return:void
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			free(d->name);
		if (d->owner != NULL)
			free(d->owner);
		free(d);
	}
}
