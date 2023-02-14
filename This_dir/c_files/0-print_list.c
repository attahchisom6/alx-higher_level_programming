#include "lists.h"

/**
 * print_list - A function to print the content of a link
 * h - reference to head (pointer to head)
 *
 * Return:list to be printed
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
	n = print_list(head);
	printf("-> %u elements\n", n);

	printf("\n");
	free(new->str);
	new->str = NULL;

	n = print_list(head);
	printf("-> %u elements\n", n);

	free(new);
	return (0);
}
