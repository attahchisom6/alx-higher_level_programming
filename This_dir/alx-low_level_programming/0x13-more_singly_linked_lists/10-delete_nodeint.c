#include "lists.h"

/**
 * delete_nodeint_at_index - function to delete a node at index idx
 * @head:pointer to a pointer that points to the first node
 * @index:the index of node to be deleted
 *
 * Return:1 if success, -1 if failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *current;
	size_t k = 0;

	temp = *head;
	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (k < index - 1)
	{
		if (temp == NULL || temp->next == NULL)
			return (-1);

		temp = temp->next;
		k++;
	}
	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}
