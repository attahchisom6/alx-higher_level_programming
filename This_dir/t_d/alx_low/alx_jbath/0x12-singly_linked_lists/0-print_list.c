#include "lists.h"

/**
 * print_list - Function that prints all the elements of a list_t list.
 * @h: pointer
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] %s\n", "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		counter++;
	}
	return (counter);
}
