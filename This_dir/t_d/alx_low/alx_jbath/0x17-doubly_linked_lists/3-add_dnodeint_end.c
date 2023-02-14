#include "lists.h"
/**
 * *add_dnodeint_end - Calls Function
 * @head: pointer to pointer head
 * @n: integer
 * Description: Function that adds a new node at the end of a list
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));
	dlistint_t *last = *head;

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		node->prev = NULL;
		*head = node;
		return (node);
	}
	while (last->next != NULL)
		last = last->next;
		last->next = node;
		node->prev = last;
	return (node);
}
