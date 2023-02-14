#include "lists.h"
/**
 * free_dlistint - Calls Function
 * @head: Pointer to head
 * Description: Function that frees a list
 * Return: 0
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head != NULL)
	{
		current = head->next;
		free(head);
		head = current;
	}
}
