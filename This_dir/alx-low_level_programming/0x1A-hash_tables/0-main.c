#include "hash_tables.h"

int main(void)
{
	shash_table_t *ht;

	ht = shash_table_create(1024);
	printf("%p\n", (void *)ht);
	return (0);
}
