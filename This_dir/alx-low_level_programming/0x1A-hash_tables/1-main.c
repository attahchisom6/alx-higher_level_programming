#include "hash_tables.h"

int main(int ac, char **argv)
{
	char *s;

	if (ac != 2)
	{
		dprintf(2, "%s number\n", argv[0]);
		exit(1);
	}

	s = argv[1];

	printf("%lu\n", hash_djb2((unsigned char *)s));
	exit(EXIT_SUCCESS);
}
