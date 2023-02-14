#include "lists.h"
/**
 * add_nodeint - Function that adds a new node at the beginning of a list
 * @head: pointer to a pointer to head node
 * @n: constant integer
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = (*head);
	(*head) = new_node;
	return (*head);
}
