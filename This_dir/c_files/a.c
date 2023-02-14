#include "lists.h"

/**
 * print_listint_safe - function to print a linked list
 * safely with a loop
 * @head:pointer to first node of the list
 *
 * Return:number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *node1 = NULL;
	const listint_t *node2 = NULL;
	size_t k1 = 0;
	size_t k2;

	node1 = head;
	while (node1 != NULL)
	{
		printf("[%p] %d\n", (void *)node1, node1->n);
		k1++;
		node1 = node1->next;

		node2 = head;
		for (k2 = 0;k2 < k1; k2++)
		{
			if (node1 == node2)
			{
				printf("->[%p] %d\n", (void *)node1, node1->n);
				return (k1);
			}
			node2 = node2->next;
			k2++;
		}
		if (head == NULL)
			exit(98);
	}
	return (k1);
}

int main(void)
{
    listint_t *head;
    listint_t *head2;
    listint_t *node;

    head2 = NULL;
    add_nodeint(&head2, 0);
    add_nodeint(&head2, 1);
    add_nodeint(&head2, 2);
    add_nodeint(&head2, 3);
    add_nodeint(&head2, 4);
    add_nodeint(&head2, 98);
    add_nodeint(&head2, 402);
    add_nodeint(&head2, 1024);
    print_listint_safe(head2);
    head = NULL;
    node = add_nodeint(&head, 0);
    add_nodeint(&head, 1);
    add_nodeint(&head, 2);
    add_nodeint(&head, 3);
    add_nodeint(&head, 4);
    node->next = add_nodeint(&head, 98);
    add_nodeint(&head, 402);
    add_nodeint(&head, 1024);
    print_listint_safe(head);
    return (0);
}
