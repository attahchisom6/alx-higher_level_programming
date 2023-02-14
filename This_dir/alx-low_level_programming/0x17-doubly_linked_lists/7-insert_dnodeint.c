#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a node at the given index
 * @h:pointer to the first node
 * @idx:index
 * @n:integer data to insert at the new node
 *
 * Return:address of new node, on failure return NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *end;
	unsigned int k = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		free(h);
		return (NULL);
	}

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}

	end = *h;
	while (end != NULL && k < idx)
	{
		if (k == idx - 1 && end->next == NULL)
		{
			new = add_dnodeint_end(h, n);
			return (new);
		}
		else if (k == idx - 1)
		{
			new->next = end->next;
			new->prev = end;
			end->next->prev = new;
			end->next = new;
			return (new);
		}
		end = end->next;
		k++;
	}
	return (NULL);
}
