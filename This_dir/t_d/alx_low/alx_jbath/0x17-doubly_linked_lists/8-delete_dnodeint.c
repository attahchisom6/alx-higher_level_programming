#include "lists.h"
/**
 * delete_dnodeint_at_index - Calls Function
 * @head: Pointer to pointer head
 * @index: integer
 * Description: Function that deletes the node at index index of a linked list
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *next;

	if (!head)
		return (-1);

	if (index && *head)
		return (delete_nodeint_at_index(&(*head)->next, index - 1));

	if (index || *head == NULL)
		return (-1);

	next = (*head)->next;
	free(*head);
	*head = next;
	return (1);
}
