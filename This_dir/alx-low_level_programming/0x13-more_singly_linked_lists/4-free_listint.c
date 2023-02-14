#include "lists.h"

/**
 * free_listint - function to free space dynamucally allicated to link
 * @head:pointer to first node
 *
 * Return:void
 */

void free_listint(listint_t *head)
{
	listint_t *pointer;

	while (head != NULL)
	{
		pointer = head;
		head = head->next;
		free(pointer);
	}
}
