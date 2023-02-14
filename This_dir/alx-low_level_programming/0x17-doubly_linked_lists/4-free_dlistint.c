#include "lists.h"

/**
 * free_dlistint - function to free a double a double linked list
 * @head:pointer to the first node
 *
 * Return:void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *last, *temp;

	last = head;
	while (last != NULL)
		last = last->prev;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
