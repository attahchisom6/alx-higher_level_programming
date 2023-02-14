#include "lists.h"

/**
 * insert_nodeint_at_index - function to insert a node at a given position
 * if the losition exiats
 * @head:pointer to a pointer that points to first node
 * @idx:index to insert element
 * @n:integer data to insert at new node
 * Return:pointer to the inserted  node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp;
	unsigned int k = 0;

	temp = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL || head == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while (temp != NULL && k < idx)
	{
		if (k == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
		k++;
	}
	return (NULL);
}
