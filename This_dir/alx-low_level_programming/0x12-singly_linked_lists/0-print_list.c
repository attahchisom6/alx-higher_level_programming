#include "lists.h"

/**
 * print_list - A function to print the content of a link
 * @h:reference to head (pointer to head)
 *
 * Return:list to be printed (which is the struct)
 */

size_t print_list(const list_t *h)
{
	size_t p;

	p = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		p++;
	}
	return (p);
}
