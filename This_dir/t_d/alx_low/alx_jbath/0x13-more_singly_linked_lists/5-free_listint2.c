#include "lists.h"
/**
  * free_listint2 - Function that frees a list
  * @head: pointer to pointer to head of list
  * Return: 0
  */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (!head)
		return;

	while ((*head) != NULL)
	{
		current = *head;
		(*head) = (*head)->next;
		free(current);
	}
	(*head) = NULL;
}
