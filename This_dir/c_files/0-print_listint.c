#include "lists.h"

/**
 * print_listint - A function to list the elements of an integer struct
 * head:start of node
 *
 * Return:number of elements of the link
 */

size_t print_listint(const listint_t *h)
{
	size_t p;

	if (h == NULL)
		return (1);
	p = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		p++;
	}
	return (p);
}

int main(void)
{
	listint_t *head, *new;
	size_t p;
	listint_t hello = {8, NULL};

	head = &hello;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		printf("Error");
		return (1);
	}
	new->n = 9;
	new->next = head;
	head = new;

	p = print_listint(head);
	printf("-> %zu elements\n", p);

	free(new);
	return (0);
}
