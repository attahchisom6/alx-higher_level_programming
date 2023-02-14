#include "my_shell.h"

/**
 * _realloc - A function that reallocates memory to a pointer
 * ptr:pointer to memory previously allocated
 * @old_size:old size of the pointer
 * @new_size:new size of pointer
 */

void *_realloc(void *ptr, size_t old_size, size_t new_size)
{
	void *new_ptr;

	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (old_size == new_size)
		return (ptr);

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	if (new_size < old_size)
		_memcpy(new_ptr, ptr, new_size);

	else if (new_size > old_size)
		_memcpy(new_ptr, ptr, old_size);
	
	free(ptr);
	return (new_ptr);
}

/**
 * _reallocpp - reallocates the memory area of a double pointer
 * @ptr:pointer to memory area pointed by the pointet *ptr;
 * @old_size:initial size of ptr
 * new_size:new size of memory area
 *
 * Return:pointer to the new allocated memory
 */

char **_reallocpp(char **ptr, size_t old_size, size_t new_size)
{
	char **new_ptr;
	size_t k;

	if (ptr == NULL)
		return (malloc(new_size * sizeof(char *)));

	if (old_size == new_size)
		return (ptr);

	new_ptr = malloc(new_size * sizeof(char *));
	if (new_ptr == NULL)
		return (NULL);

	for (k = 0; k < old_size;k++)
		new_ptr[k] = ptr[k];

	free(ptr);

	return (new_ptr);
}
