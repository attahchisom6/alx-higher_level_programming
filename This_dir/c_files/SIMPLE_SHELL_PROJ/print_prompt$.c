#include "main.h"

void print_$(void) __attribute__((constructor));

void print_$(void)
{
	printf("$  ");
}

int main(int c, char **argv)
{
	int k;
	(void)c;

	for (k = 0; argv[k] != NULL; k++)
	{
		if (k == 0)
			printf("%s\n", argv[0]);
		else
			printf("%s\n", argv[k]);
	}
	return (0);
}
