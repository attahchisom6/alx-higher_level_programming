#include "lists.h"

/**
 * sum_listint - function to sum all the data contained in a list
 * @head:pointer to the first node
 *
 * Return:sum of all the data
 */

int sum_listint(listint_t *head)
{
	listint_t *node;
	int p, sum = 0;

	node = head;
	while (node != NULL)
	{
		sum = sum + node->n;
		node = node->next;
	}
	return (sum);
}

int main(void)
{
    listint_t *head;
    int sum;

    head = NULL;
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);
    sum = sum_listint(head);
    printf("sum = %d\n", sum);
    free_listint2(&head);
    return (0);
}
