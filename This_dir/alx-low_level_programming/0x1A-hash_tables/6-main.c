#include "hash_tables.h"


int main(void)
{
	shash_table_t *ht;
	char *key;
	char *value;

	ht = shash_table_create(1024);
	shash_table_set(ht, "c", "fun");
	shash_table_set(ht, "python", "awesome");
	shash_table_set(ht, "Bob", "and Kris love asm");
	shash_table_set(ht, "N", "queens");
	shash_table_set(ht, "Asterisk", "Obelisk");
	shash_table_set(ht, "Betty", "Cool");
	shash_table_set(ht, "98", "Battery Streetz");

	key = strdup("Tim");
	value = strdup("Britton");
	shash_table_set(ht, key, value);

	key[0] = '\0';
	value[0] = '\0';
	free(key);
	free(value);

	shash_table_set(ht, "Battery", "Street");
	shash_table_set(ht, "hetairas", "Bob");
	shash_table_set(ht, "hetairas", "Bob Z");
	shash_table_set(ht, "mentioner", "Bob");
	shash_table_set(ht, "hetairas", "Bob Z chu");
	shash_table_print(ht);
	shash_table_delete(ht);
	return (EXIT_SUCCESS);
}
