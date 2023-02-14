#include "hash_tables.h"

int main(int ac, char **argv)
{
	shash_table_t *ht;

	if (ac != 3)
	{
		dprintf(2, "Error\n");
		exit(1);
	}
	ht = shash_table_create(1024);
	shash_table_set(ht, argv[1], argv[2]);
	return (EXIT_SUCCESS);
}
