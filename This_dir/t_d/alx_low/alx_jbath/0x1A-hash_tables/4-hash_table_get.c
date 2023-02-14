#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table array
 * @key: key
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	char *key_copy;
	unsigned long int index;
	hash_node_t *temp;

	if (ht == NULL)
		return (NULL);

	key_copy = strdup(key);
	index = key_index((unsigned char *)key, ht->size);
	temp = ht->array[index];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key_copy) == 0)
			break;
		temp = temp->next;
	}
	free(key_copy);

	if (temp == NULL)
		return (NULL);

	return (temp->value);
}
