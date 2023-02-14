#include "lists.h"
/**
  * print_dlistint - Calls Function
  * @h: Pointer h
  * Description: Function that prints all elements of list
  * Return: Number of nodes
  */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
