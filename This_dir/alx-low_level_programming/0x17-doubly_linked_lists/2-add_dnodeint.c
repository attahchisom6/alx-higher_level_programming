#include "lists.h"

/**
 * add_dnodeint - function to add a node at the begining of a
 * double linked list
 * @head:pointer to the first node
 * @n:integer data to be added to the begining of the list
 *
 * Return:address of the new element or Null if it fails
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		free(head);
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (*head);
}
