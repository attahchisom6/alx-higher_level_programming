#include "lists.h"

/**
 * delete_dnodeint_at_index - function to delete a node
 * at position index
 * @head:a double pointer to the first node
 * @index: position of node to be deleted
 * Return:1 on success, -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *temp_1, *del;
	unsigned int k = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		temp_1 = *head;
		*head = temp_1->next;
		if (temp_1->next != NULL)
			temp_1->next->prev = NULL;
		free(temp_1);
		return (1);
	}

	temp = *head;
	while (k < index - 1)
	{
		if (temp == NULL)
			return (-1);
		temp = temp->next;
		k++;
	}

	if (temp->next->next != NULL)
	{
		del = temp->next;
		temp->next = del->next;
		del->next->prev = temp;
		free(del);
		return (1);
	}
	else
	{
		free(temp->next);
		temp->next = NULL;
		return (1);
	}
	return (-1);
}
