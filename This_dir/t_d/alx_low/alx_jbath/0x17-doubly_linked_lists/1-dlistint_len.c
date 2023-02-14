#include "lists.h"
/**
  * dlistint_len - Calls Function
  * @h: Pointer
  * Description: Function that returns the number of elements in a linked list
  * Return: Number of elements
  */
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
