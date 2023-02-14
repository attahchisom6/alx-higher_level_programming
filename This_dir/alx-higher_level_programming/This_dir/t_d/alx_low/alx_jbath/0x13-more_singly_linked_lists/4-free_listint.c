#include "lists.h"
/**
  * free_listint - Function that frees a list
  * @head: pointer to head of list
  * Return: 0
  */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head->next;
		free(head);
		head = current;
	}
}
