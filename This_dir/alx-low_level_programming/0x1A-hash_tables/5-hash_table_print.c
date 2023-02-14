#include "hash_tables.h"

/**
 * hash_table_print - prints the elements of a hash table
 * @ht: a pointer to the hash table
 *
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int k = 0;
	hash_node_t *head = NULL;
	char *delim = "";

	if (ht == NULL)
		return;

	printf("{");
	while (k < ht->size)
	{
		head = ht->array[k];
		while (head != NULL)
		{
			printf("%s'%s': '%s'", delim, head->key, head->value);
			delim = ", ";

			head = head->next;
		}
		k++;
	}
	printf("}\n");
}
