#include "main.h"
#include "stdio.h"

/**
 * _memset - this function will fill a memory space or buffer with
 * constant bytes
 * @s:pointer to memory space to be filled with the bytes
 * @b:byte to fill
 * @n:number of bytes to fill
 *
 * Return:A pointer to the memory area s
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
	return (&s[p]);
}


/**
 * simple_print_buffer - prints buffer i  hexadecimal
 * @buffer:The address of memory to print
 * @size:the size of the memory to print
 *
 * Return:void
 */

void simple_print_buffer(char *buffer, unsigned int size)
{
	unsigned int k;

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
	char buffer[98] = {0x00};

	simple_print_buffer(buffer, 98);
	_memset(buffer, 0x03, 95);
	printf("------------------------------------\n");
	simple_print_buffer(buffer, 98);
	return (0);
}
