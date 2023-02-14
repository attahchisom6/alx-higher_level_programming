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
	size_t p;

	while (h != NULL)
	{
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
		printf("Error\n");
		return (1);
	}
	new->n = 9;
	new->next = head;
	head = new;

	p = listint_len(head);
	printf("-> %zu elements\n", p);
	
	free(new);
	return (0);
}
