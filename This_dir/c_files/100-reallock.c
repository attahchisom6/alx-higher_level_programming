#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _reallock - function to reallocate a new memory to an old one
 * @prtr:lointer to original size of memory
 * @old_size:orginal size of memory
 * @new_size:new size of memory
 *
 * Return pointer to new size of memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int k;
	char *copied_buffer, *reallock;
	if (ptr != NULL)
	{
		copied_buffer = ptr;
	}
	else if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (old_size == new_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);

		return (NULL);
	}

	reallock = malloc(new_size);
	if (reallock == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < new_size || k < old_size; k++)
	{
		reallock[k] = copied_buffer[k];
	}
	free(ptr);
	return (reallock);
}

void print_buffer(char *s, unsigned int n)
{
	unsigned int p;

	p = 0;
	while (p < n)
	{
		if (p % 10)
		{
			printf("  ");
		}
		if (!(p % 10) && p)
		{
			printf("\n");
		}
		printf("0x%02x", s[p]);
		p++;
	}
	printf("\n");
}

int main(void)
{
	char *s;
	int k;
	
	s = malloc(10 * sizeof(int));
	s = _realloc(s, 10 * sizeof(int), 98 * sizeof(int));
	k = 0;
	while (k < 98)
	{
		s[k++] = 98;
	}
	print_buffer(s, 98);
	free(s);
	return (0);
}
