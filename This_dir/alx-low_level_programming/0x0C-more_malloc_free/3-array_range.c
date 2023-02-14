#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - function to print an array of integers
 * in ascending order of magnitude
 * @min:the lowest integer value
 * @max:the heighest integer value
 *
 * Return:pointer to the new created array
 */

int *array_range(int min, int max)
{
	int *buffer;
	int k = 0, p, g = min;

	if (min > max)
		return (NULL);

	/*min = 1, max = 8, total element = 8 + 1 - 1 = 8 */
	p = max + 1 - min;
	buffer = malloc(p * sizeof(int));
	if (buffer == NULL)
	{
		return (NULL);
	}

	while (k <=  max - min)
		buffer[k++] = g++;
	return (buffer);
}
