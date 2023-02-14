#include "hash_tables.h"

/**
 * key_index - function to get the index of a key
 * @key: fixed value if a string
 * @size: size of the hash taable
 *
 * Return: index of the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int k;

	if (size == 0 || key == NULL)
		return (0);
	k = hash_djb2(key) % size;

	return (k);
}
