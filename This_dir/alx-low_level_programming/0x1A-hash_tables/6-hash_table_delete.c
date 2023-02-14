#include "hash_tables.h"

/**
 * hash_table_delete - This function deletes an element from a hash table
 * @ht: a pointer to the hash table
 *
 * Void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int k = 0;
	hash_node_t *head, *temp;

	if (ht == NULL)
		return;

	while (k < ht->size)
	{
		head = ht->array[k];
		while (head != NULL)
		{
			temp = head;
			head = head->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
		k++;
	}
	free(ht->array);
	free(ht);
}
