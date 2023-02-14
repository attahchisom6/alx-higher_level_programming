#include "lists.h"
/**
 * *insert_dnodeint_at_index - Calls Function
 * @h: Pointer to pointer h
 * @idx: integer index
 * @n: integer
 * Description: Function that inserts a new node at a given position
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *node;
	dlistint_t *temp;

	if (idx != 0 && (h == NULL || (*h) == NULL))
		return (NULL);

	node = malloc(sizeof(dlistint_t));
	*temp = *h->next;

	if (node == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	if (idx > 0 && *h)
	*temp = (*h)->next;

	{
		for (i = 0; idx > i; i++)
		{
			if (h == NULL)
				return (NULL);
		}
		*h = (*h)->next;
		temp = temp->next;
		node->next = temp;
		temp->prev = node;
		node->prev = *h;
		(*h)->next = node;
	}
	return (node);
}
