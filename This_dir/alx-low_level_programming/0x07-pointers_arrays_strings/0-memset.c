#include "main.h"
#include <stdio.h>

/**
 * _memset - function to fill a constant byte into a memory area
 * or buffer
 * @s:buffer or memory area to be filled
 * @b:byte to  fill
 * @n:number of byte to fill
 *
 * Return:s processed the buffer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int p;

	p = 0;
	while (p < n)
	{
		s[p] = b;
		p++;
	}
	return (s);
}
