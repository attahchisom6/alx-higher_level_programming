#include "lists.h"

/**
 * sum_dlistint - function to add all the data in a linked list
 * @head:pointer to the first node
 *
 * Return:sum of all the data in the list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
