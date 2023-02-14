#include "lists.h"

/**
  * *add_nodeint_end - Function that adds a new node at the end of a list
  * @head: pointer to a pointer to head of list
  * @n: integer
  * Return: address of the new element, or NULL if it failed
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));
	listint_t *last = *head;

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = node;
	return (node);
}
