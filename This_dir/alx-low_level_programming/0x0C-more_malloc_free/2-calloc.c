#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _memset - function to fill a buffer with constant byte
 * @buffer:buffer to be filled
 * @b:byte data to fill buffer
 * @n:number of byte to fill buffer
 *
 * Return:pointer to buffer
 */

char *_memset(char *buffer, char b, unsigned int n)
{
	unsigned int p;

	p = 0;
	while (p < n)
	{
		buffer[p] = b;
		p++;
	}
	return (buffer);
}

/**
 * _calloc - A function to assign memory to an array
 * @nmemb:each element of the array
 * @size:size of the array
 *
 * Return:pointer to each space allocated to members of the array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int arr_size;
	void *array;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr_size = nmemb * size;
	array = malloc(arr_size);
	if (array == NULL)
	{
		return (NULL);
	}

	return (_memset(array, 0, arr_size));
}
