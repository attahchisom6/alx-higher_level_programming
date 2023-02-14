#include "hash_tables.h"

/**
 * shash_table_create - create a hash table with a designated size
 * @size: size of the hash table
 *
 * Return: pointer to the hash table
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int k = 0;
	shash_table_t *table;

	table = malloc(sizeof(shash_table_t));
	if (table == NULL)
	{
		free(table);
		return (NULL);
	}
	table->size = size;
	table->array = malloc(size * sizeof(shash_node_t));
	if (table->array == NULL)
	{
		free(table->array);
		return (NULL);
	}
	while (k < size)
	{
		table->array[k] = NULL;

		k++;
	}
	table->shead = NULL;
	table->stail = NULL;

	return (table);
}

/**
 * shash_table_set - function to set the keys and values of a hash table
 * @ht: a pointer to the sorted hash table
 * @key: a unique set of strings
 * @value: associated string to each value
 *
 * Return: int elent set to the hash table
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned int k, size;
	char *dup = strdup(value);
	shash_node_t *shead, *sshead, *new, *temp;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	size = ht->size;
	shead = ht->shead;
	k = key_index((const unsigned char *)key, size);

	while (shead != NULL)
	{
		if (strcmp(shead->key, key) == 0)
		{
			free(shead->value);
			shead->value = dup;
			return (1);
		}
		shead = shead->snext;
	}

	new = malloc(sizeof(shash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	new->value = dup;

	new->next = ht->array[k];
	ht->array[k] = new;

	if (ht->shead == NULL)
	{
		new->sprev = NULL;
		new->snext = NULL;
		ht->shead = ht->stail = new;
	}
	else if  (strcmp(ht->shead->key, key) > 0)
	{
		/*add the node before head*/
		new->sprev = NULL;
		new->snext = ht->shead;
		ht->shead->sprev = new;
		ht->shead = new;
	}
	else
	{
		temp = ht->shead;
		while (temp->snext && strcmp(temp->key, key) < 0)
			temp = temp->snext;
		new->sprev = temp;
		new->snext = temp->snext;
		if (temp->snext != NULL)
			/*itemp is not the last node*/
			temp->snext->sprev = new;
		else if (temp->snext == NULL)
			/*temp is the last node*/
			ht->stail = new;
		temp->snext = new;
	}
	return (1);
}

/**
 * shash_table_get - get a value from the table, given any key such that key
 * is in shash table
 * @ht: a pointer to the shash table
 * @key: string value
 *
 * Return: associate value of key
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int k = 0, size;
	shash_node_t *shead;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);
	size = ht->size;
	k = key_index((const unsigned char*)key, size);
	if (k > size)
		return (NULL);
	shead = ht->array[k];

	while (shead != NULL)
	{
		if (strcmp(shead->key, key) == 0)
			return (shead->value);
		shead = shead->snext;
	}
	return (NULL);
}

/**
 * shash_table_print - print the elements in a shash table
 * @ht: pointer to the shash table
 *
 * Return: void
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *shead;
	char *delim = "";

	if (ht == NULL)
		return;

	shead = ht->shead;

	printf("{");
	while (shead != NULL)
	{
		printf("%s'%s': '%s'", delim, shead->key, shead->value);
		delim = ", ";

		shead = shead->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - print the sorted linked list in reverse order
 * @ht: pointer to the shash table
 *
 * Return: void
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *shead;
	char *delim = "";

	if (ht == NULL)
		return;

	printf("{");

	shead = ht->stail;
	while (shead != NULL)
	{
		printf("%s'%s': '%s'", delim, shead->key, shead->value);
		delim = ", ";

		shead = shead->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes a key, value pair from a hash table
 * @ht: a pointer to the shash table
 *
 * Return: void
 */

void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *shead, *temp;
	unsigned long int k = 0, size;

	size = ht->size;
	while (k < size)
	{
		shead = ht->array[k];
		while(shead != NULL)
		{
			temp = shead;
			shead = shead->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
		k++;
	}
	free(ht->array);
	free(ht);
}
