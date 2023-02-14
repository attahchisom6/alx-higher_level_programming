#include "lists.h"

/**
 * add_dnodeint_end - function to add a node at the end of
 * a doubly linked list
 * @head: pointer to the first node
 * of the list
 * @n:integer data to add at the end of the list
 *
 * Return: address of the new element, else Null
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *end;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		free(head);
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	end = *head;
	if (end == NULL)
	{
		new->prev = NULL;
		*head = new;

		return (new);
	}

	else
	{
		while (end->next != NULL)
			end = end->next;
		end->next = new;
		new->prev = end;

		return (new);
	}
	return (NULL);
}
