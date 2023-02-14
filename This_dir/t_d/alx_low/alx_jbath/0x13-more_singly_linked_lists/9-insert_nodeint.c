#include "lists.h"
/**
 * *insert_nodeint_at_index - Function that returns the nth node of a list
 * @head: pointer to a pointer to head
 * @idx: the index of the node starting at 0
 * @n: data
 * Return: 0
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *node;
	listint_t *temp = *head;

	if (idx != 0 && (head == NULL || (*head) == NULL))
		return (NULL);

	node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);

	if (idx == 0 && (head != NULL || (*head) != NULL))
	{
		node->next = (*head);
		(*head) = node;
		(*head)->n = n;
		return (*head);
	}

	for (i = 0; i < idx - 1 && temp != NULL; i++)
		temp = temp->next;
	if (!temp)
	{
		free(node);
		return (NULL);
	}
	node->next = temp->next;
	temp->next = node;
	node->n = n;

	return (node);
}
