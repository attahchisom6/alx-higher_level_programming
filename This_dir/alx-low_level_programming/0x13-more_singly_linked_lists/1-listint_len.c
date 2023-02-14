#include "lists.h"

/**
 * listint_len - this function will lis  the number of element
 * in a link
 * @h:first node
 *
 * Return:number of elements in the link
 */

size_t listint_len(const listint_t *h)
{
	int p = 0;

	while (h != NULL)
	{
		h = h->next;
		p++;
	}
	return (p);
}
