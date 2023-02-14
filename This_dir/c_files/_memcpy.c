#include "main.h"
#include <stdio.h>

/**
 * _memcpy - function to copy  memory area to another area
 * @dest:pointer to destination of the copy
 * src:source buffer or memory area to be copied
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
	return (dest); /* also return (&dest[p]) can do the job */
}	

/**
 * print_buffer - prints a buffer inhexadecimal
 * @buffer:memory area containing bytes of data to print
 * @aize:maximum amount of bytes buffer contains
 *
 * Return:void
 */

void print_buffer(char *buffer, unsigned int size)
{
	unsigned k;

	k = 0;
	while (k < size)
	{
		if (k % 10)
		{
			printf("  ");
		}
		if (!(k % 10) && k)
		{
			printf("\n");
		}
		printf("0x%02x", buffer[k]);
		k++;
	}
	printf("\n");
}

int main(void)
{
	char buffer[98] = {0};
	char greeting[98] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};

	print_buffer(buffer, 98);
	_memcpy(buffer + 5, greeting, 10);
	printf("------------------++-----------\n");
	print_buffer(buffer, 98);
	return (0);
}
