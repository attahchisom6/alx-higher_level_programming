#include "holberton.h"

/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @nmemb: input from main function
 * @size: input from main function
 * Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int i, b = nmemb * size;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(b);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < b; i++)
		a[i] = 0;
	return (a);
}
