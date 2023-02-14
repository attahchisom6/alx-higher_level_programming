#include "hash_tables.h"

/**
 * hash_table_delete - Function that deletes a hash table
 * @ht: hash table to delete
 * Return: 0
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *temp;

	if (ht == NULL)
		return;

	for (index = 0; index < ht->size; index++)
		if (ht->array[index] != NULL)
		{
			while (ht->array[index] != NULL)
			{
				temp = ht->array[index]->next;
				free(ht->array[index]->key);
				free(ht->array[index]->value);
				free(ht->array[index]);
				ht->array[index] = temp;
			}
			free(ht->array[index]);
		}
	free(ht->array);
	free(ht);
}
