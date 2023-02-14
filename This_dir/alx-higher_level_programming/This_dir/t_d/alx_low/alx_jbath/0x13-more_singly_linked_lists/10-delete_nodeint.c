#include "lists.h"
/**
 * delete_nodeint_at_index - Function that deletes the node at index
 * index of a listint_t linked list
 * @head: pointer to a pointer to head
 * @index: the index of the node starting at 0
 * Return: 0
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *next;

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
