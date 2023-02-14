#include "lists.h"
/**
 * *get_nodeint_at_index - Function that returns the nth node of a list
 * @head: pointer
 * @index: the index of the node starting at 0
 * Return: 0
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter;

	if (head == NULL)
		return (NULL);

	for (counter = 1; counter <= index; counter++)
	{
		if (head->next)
			head = head->next;
		else
			return (NULL);
	}
	return (head);
}
