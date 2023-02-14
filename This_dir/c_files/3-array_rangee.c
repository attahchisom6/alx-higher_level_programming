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
	int k, p = 0;

	if (min > max)
		return (NULL);

	/*min = 1, max = 8, total element = 8 + 1 - 1 = 8 */
	p = max + 1 - min;
	buffer = malloc(p * sizeof(int));
	if (buffer == NULL)
	{
		return (NULL);
	}


	k = 0;
	while (min <= max)
	{
		buffer[k] = min++;
		k++;
	}
	return (buffer);
}

void print_buffer(int *s, unsigned int n)
{
	unsigned int k;

	k = 0;
	while (k <= n)
	{
		if (k % 10)
		{
			printf("  ");
		}
		if (!(k % 10) && k)
		{
			printf("\n");
		}
		printf("0x%02x", s[k]);
		k++;
	}
	printf("\n");
}

int main(void)
{
	int *s;

	s = array_range(0, 10);
	print_buffer(s, 10);
	free(s);
	return (0);
}
