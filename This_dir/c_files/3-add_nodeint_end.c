#include "lists.h"

/**
 * add_nodeint_end - function to add a node at the beginining of a link
 * @head:reference or pointer to the first node
 * @n:int data type to insert at new node
 *
 * Return:pointer to new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *end;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	end = *head;
	if (end == NULL)
	{
		*head = new;
		return (*head);
	}
	else
	{
		while (end->next != NULL)
			end = end->next;
		end->next = new;
	}
	return (*head);
}

int main(void)
{
	listint_t *head = NULL;

	add_nodeint_end(&head, 0);
	add_nodeint_end(&head, 1);
	add_nodeint_end(&head, 2);
	add_nodeint_end(&head, 3);
	add_nodeint_end(&head, 4);
	add_nodeint_end(&head, 98);
	add_nodeint_end(&head, 402);
	add_nodeint_end(&head, 1024);
	print_listint(head);
	free(head);
	return (0);
}
