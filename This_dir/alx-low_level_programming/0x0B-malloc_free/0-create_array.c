#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - this function create an array of characters each
 * @size:size of array
 * @c:character whose ascii value should be printed
 *
 * Return:character type data
 */

char *create_array(unsigned int size, char c)
{
	unsigned int k;
	char *arr;

	arr =  malloc(size * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}
	for (k = 0; k <= size; k++)
	{
		if (arr == 0)
		{
			return (NULL);
		}
		arr[k] = c;
	}

	return (arr);
}
