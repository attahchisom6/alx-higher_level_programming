#include "lists.h"

/**
 * reverse_listint - A function to reverse a list
 * @head:pointer to a pointer that points to the first node
 *
 * Return:pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node = NULL;
	listint_t *curr_node = NULL;

	while  (*head != NULL)
	{
		curr_node = (*head)->next;
		(*head)->next = prev_node;
		prev_node = *head;
		*head = curr_node;
	}
	*head = prev_node;
	return (*head);
}

int main(void)
{
    listint_t *head;

    head = NULL;
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);
    print_listint(head);
    reverse_listint(&head);
    print_listint(head);
    free_listint2(&head);
    return (0);
}
