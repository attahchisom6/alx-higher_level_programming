#include "lists.h"

/**
 * insert_node - Inserts a number into a sorted singly-linked list.
 * @head: A pointer the head of the linked list.
 * @number: The number to insert.
 * Author - Tolulope Fakunle
 * Return: If the function fails - NULL.
 *         Otherwise - a pointer to the new node.
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *begin, *end, *new;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = number;

	begin = *head;
	if (begin == NULL || begin->n >= number)
	{
		new->next = *head;
		*head = new;
		
		return (new);
	}
	else
	{
		end = *head;
		while (end->next != NULL && end->next->n < number)
			end = end->next;
		new->next = end->next;
		end->next = new;
		
		return (new);
	}
	return (NULL);
}
