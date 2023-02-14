#include "hash_tables.h"

int main(int c, char **argv)
{
	char *s;
	unsigned long int hash = 1024;

	if (c != 2)
	{
		dprintf(2, "Usage: %s arg\n", argv[0]);
		exit(1);
	}

	s = argv[1];
	printf("%lu\n", hash_djb2((unsigned char *)s));
	printf("%lu\n", key_index((unsigned char *)s, hash));
	exit(EXIT_SUCCESS);
}
