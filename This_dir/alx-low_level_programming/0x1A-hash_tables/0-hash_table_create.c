#include "hash_tables.h"

/**
 * hash_table_create - function to create a hash table
 * @size: size of the hash table
 *
 * Return:a pointer to the hash table created
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int k = 0;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
	{
		free(table);
		return (NULL);
	}

	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table == NULL)
	{
		free(table);
		return (NULL);
	}

	while (k < size)
	{
		table->array[k] = NULL;

		k++;
	}

	return (table);
}
