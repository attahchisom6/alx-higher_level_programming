#include "lists.h"

/**
 * list_len - function to list the lenth or full size of a link
 * @h:pointer connecting the list
 *
 * Return:length of struct
 */

size_t list_len(const list_t *h)
{
	size_t p;

	p = 0;
	while (h != NULL)
	{
		h = h->next;
		p++;
	}
	return (p);
}
