#include "lists.h"

/**
 * dlistint_len - return the number of elenents in a linked list
 * @h:pointer to the first node
 *
 * Return:number of elements in the link list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int k = 0;
	const dlistint_t *last;

	last = h;
	while (last != NULL)
		last = last->prev;
	while (h != NULL)
	{
		h = h->next;
		k++;
	}
	return (k);
}
