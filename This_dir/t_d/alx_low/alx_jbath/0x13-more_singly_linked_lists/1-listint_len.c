#include "lists.h"
/**
  * listint_len - Function that returns the number of elements in a linked list
  * @h: pointer
  * Return: the number of nodes
  */
size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
