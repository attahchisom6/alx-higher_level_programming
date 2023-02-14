#include "lists.h"

/**
 * print_dlistint - function to print a double linked list
 * @h:pointer to the first node
 *
 * Return:no of elements in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	int k = 0;
	const dlistint_t *last;

	last = h;
	while (last != NULL)
		last = last->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		k++;
	}
	return (k);
}
