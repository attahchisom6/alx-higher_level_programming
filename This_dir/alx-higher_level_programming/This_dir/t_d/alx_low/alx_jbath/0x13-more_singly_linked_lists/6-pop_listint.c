#include "lists.h"
/**
  * pop_listint - Function that deletes the head node
  * of a list and returns the head node's data
  * @head: pointer to pointer to head
  * Return: the head node's data
  */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp = *head;

	if (!head)
		return (0);
	if ((*head) == NULL)
		return (0);

	n = (*head)->n;
	*head = (*head)->next;
	free(temp);
	return (n);
}
