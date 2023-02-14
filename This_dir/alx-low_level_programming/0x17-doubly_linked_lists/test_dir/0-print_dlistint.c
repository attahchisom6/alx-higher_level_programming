#include "lists.h"

/**
 * print_dlistint - function to print a double linked list
 * @h:pointer to the first node
 * 
 * Return:no of elements in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t k = 0;
	const dlistint_t *last;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		last = h;
		h = h->next;
		k++;
	}
	return (k);
}

int main(void)
{
	dlistint_t *head, *new;
	dlistint_t hello = {8, NULL, NULL};
	size_t n;
	head = &hello;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (0);
	
	new->n = 9;
	new->next = head;
	new->prev = NULL;
	head->prev = new;
	head = new;

	n = print_dlistint(head);
	printf("->%zu elements\n", n);
	free(head);
	return (0);
}
