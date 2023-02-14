#include "main.h"
#include <stdio.h>

/**
 * _memcpy - function to copies memory area
 * @dest:destination recieving the copy
 * @src:source memory to be copied from
 * @n:number of memory area to be copied
 *
 * Return:pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int p;

	p = 0;
	while (p < n)
	{
		dest[p] = src[p];
		p++;
	}
	return (dest);
}
