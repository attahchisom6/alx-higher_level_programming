#include "lists.h"

/**
 * print_listint - A function to list the elements of an integer struct
 * @h:start of node
 *
 * Return:number and list of elements in the link
 */

size_t print_listint(const listint_t *h)
{
	int p;

	p = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		p++;
	}
	return (p);
}
