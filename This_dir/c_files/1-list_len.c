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

int main(void)
{
	list_t *head;
	list_t *new;
	size_t n;

	list_t hello = {"World", 5, NULL};
	head = &hello;
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		printf("Error\n");
		return (1);
	}

	new->str = strdup("Hello");
	new->len = 5;
	new->next = head;
	head = new;

	n = list_len(head);
	printf("-> %zu elements\n", n);
	free(new->str);
	free(new);
	return (0);
}
