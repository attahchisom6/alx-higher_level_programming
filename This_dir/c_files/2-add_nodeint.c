#include "lists.h"

/**
 * add_nodeint - function to add int data type to the nodes that
 * is to be add in front of a link
 * @head:referwnce or pointer to first element
 * @n:int data to add to the nodes
 *
 * Return:pointer to the added elements
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
