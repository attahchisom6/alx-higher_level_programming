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

	arr =  malloc(size*sizeof(char));
	if (arr == 0)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	else
	{
	while (k < size)
	{
		arr[k] = c;
		k++;
	}

	return (arr);
	}
}

void print_buffer(char *buffer, unsigned int n)
{
	unsigned int k;

	k = 0;
	while (k < n)
	{
		if (k % 10)
		{
			printf("  ");
		}
		if (!(k % 10) && k)
		{
			printf("\n");
		}
		k++;
		printf("0x%2x", buffer[k]);
	}
	printf("\n");;
}

int main(void)
{
	char *buffer;

	buffer = create_array(98, 'H');
	if (buffer == NULL)
	{
		printf("No memory space avalaible to buffer\n");
	}
	print_buffer(buffer, 98);
	free(buffer);
	return (0);
}
