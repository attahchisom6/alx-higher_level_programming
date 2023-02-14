#include "lists.h"
/**
 * *get_dnodeint_at_index - Calls Function
 * @head: Pointer to head
 * @index: integer
 * Description: Function that returns the nth node of a linked list
 * Return: Node, NULL if node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	if (head == NULL)
		return (NULL);

	for (counter = 1; counter <= index; counter++)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
