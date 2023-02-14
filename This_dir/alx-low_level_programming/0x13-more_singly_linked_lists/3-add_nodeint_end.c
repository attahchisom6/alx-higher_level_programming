#include "lists.h"

/**
 * add_nodeint_end - function to add a node at the beginining of a link
 * @head:reference or pointer to the first node
 * @n:int data type to insert at new node
 *
 * Return:pointer to new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *end;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	end = *head;
	if (end == NULL)
		*head = new;
	else
	{
		while (end->next != NULL)
			end = end->next;
		end->next = new;
	}
	return (*head);
}
