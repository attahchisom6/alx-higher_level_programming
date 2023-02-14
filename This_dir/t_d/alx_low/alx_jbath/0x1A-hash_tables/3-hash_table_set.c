#include "hash_tables.h"
/**
 * hash_table_set - Function that adds an element to the table
 * @ht: hash table array
 * @key: key
 * @value: value
 * Return: 1 on Success 0 if Fails
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node;
	hash_node_t *new_node;

	if (!ht || strcmp(key, "") == 0 || !key || !value)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	node = ht->array[index];
	/* Creating new node */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (!new_node->key || !new_node->value)
	{
		free(new_node);
		return (0);
	}
	if (node != NULL)
	{
		while (node)
		{
			if (strcmp(key, node->key) == 0)
			{
				free(node->value);
				node->value =  strdup((char *)value);
				return (1);
			}
			node = node->next;
		}
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
