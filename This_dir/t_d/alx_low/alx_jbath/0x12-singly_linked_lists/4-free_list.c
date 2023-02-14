#include "lists.h"

/**
 * free_list - Function that frees a list
 * @head: pointer to head
 * Return: 0
 */
void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head->next;
		free(head->str);
		free(head);
		head = current;
	}
}
