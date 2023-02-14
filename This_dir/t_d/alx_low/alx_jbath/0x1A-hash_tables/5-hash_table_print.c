#include "hash_tables.h"

/**
 * hash_table_print - Function that prints a hash table
 * @ht: hash table to print
 * Return: 0
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht)
	{
		printf("{");
		for (index = 0; index < ht->size; index++)
		{
			node = ht->array[index];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				if (node)
					printf(", ");
				node = node->next;
			}
		}
		printf("}\n");
	}
}
