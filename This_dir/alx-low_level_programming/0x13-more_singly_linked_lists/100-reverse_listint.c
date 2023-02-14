#include "lists.h"

/**
 * reverse_listint - A function to reverse a list
 * @head:pointer to a pointer that points to the first node
 *
 * Return:pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node = NULL;
	listint_t *curr_node = NULL;

	while  (*head != NULL)
	{
		curr_node = (*head)->next;
		(*head)->next = prev_node;
		prev_node = *head;
		*head = curr_node;
	}
	*head = prev_node;
	return (*head);
}
