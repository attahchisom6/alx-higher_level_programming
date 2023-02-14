#include "hash_tables.h"

/**
 * hash_table_get - function to get a value of a given key
 * @ht: A pointer to the hash table
 * @key: the key we seek
 *
 * Return: pointer to the value if found else NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int k, size;
	hash_node_t *head;

	if (ht == NULL || key == NULL)
		return (NULL);

	size = ht->size;
	k = key_index((const unsigned char *)key, size);

	head = ht->array[k];
	while (head != NULL)
	{
		if (strcmp(head->key, key) == 0)
			return (head->value);
		head = head->next;
	}
	return (NULL);
}
