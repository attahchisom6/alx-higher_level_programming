#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - A function that allocates memory
 * @b:size of memory to allocate
 *
 * Return:pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *str;

	str = malloc(b);
	if (str ==  NULL)
		exit(98);
	return (str);
}

int main(void)
{
	char *c;
	int *p;
	float *f;
	double *q;

	c = malloc_checked(1024 * sizeof(char));
	printf("%p\n", (void *) c);
	p = malloc_checked(402 * sizeof(int));
	printf("%p\n", (void *) p);
	f = malloc_checked(100000000 * sizeof(float));
	printf("%p\n", (void *) f);
	q = malloc_checked(INT_MAX);
	printf("%p\n", (void *) q);
	free(c);
	free(p);
	free(f);
	free(q);
	return (0);
}
