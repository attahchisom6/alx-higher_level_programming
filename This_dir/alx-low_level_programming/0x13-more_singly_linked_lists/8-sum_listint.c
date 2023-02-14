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
	int sum = 0;

	node = head;
	while (node != NULL)
	{
		sum = sum + node->n;
		node = node->next;
	}
	return (sum);
}
