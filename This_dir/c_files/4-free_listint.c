#include "lists.h"

/**
 * free_listint - function to free space dynamucally allicated to link
 * @head:pointer to first node
 *
 * Return:void
 */

void free_listint(listint_t *head)
{
	listint_t *pointer;

	while (head != NULL)
	{
		pointer = head;
		head = head->next;
		free(pointer);
	}
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
    free_listint(head);
    head = NULL;
    return (0);
}
