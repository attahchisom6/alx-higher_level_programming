#include "lists.h"
/**
 * *add_dnodeint - Calls Function
 * @head: pointer to pointer head
 * @n: Index to insert node
 * Description: Function that adds a new node at the beginning of a list
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = (*head);
	newNode->prev = NULL;

	if (*head)
		(*head)->prev = newNode;
	(*head = newNode);
	return (newNode);
}
