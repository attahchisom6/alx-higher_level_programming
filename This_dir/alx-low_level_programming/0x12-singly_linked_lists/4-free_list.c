#include "lists.h"

/**
 * free_list - function to free memory dynamicall allocated
 * to links
 * @head:pointer that connects each memory area of the links
 *
 * Return:void
 */

void free_list(list_t *head)
{
	list_t *point;

	while ((point = head) != NULL)
	{
		head = head->next;
		free(point->str);
		free(point);
	}
}
