#include "lists.h"
/**
 * sum_listint - Function that returns the sum of all
 * the data(n) of a linked list
 * @head: pointer
 * Return: Sum
 */
int sum_listint(listint_t *head)
{
	if (head == NULL)
		return (0);

	return (head->n + sum_listint(head->next));
}
