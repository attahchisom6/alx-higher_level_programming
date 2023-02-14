#include "lists.h"
/**
 * *reverse_listint - Function that reverses a listint_t linked list.
 * @head: pointer to a pointer to head
 * Return: 0
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current;
	listint_t *previous;

	current = *head;
	previous = NULL;

	while (*head != NULL)
	{
		*head = (*head)->next;
		current->next = previous;
		previous = current;
		current = *head;
	}
	*head =  previous;
	return (*head);
}
