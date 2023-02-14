#include "lists.h"
/**
 * sum_dlistint - Calls Function
 * @head: Pointer to head
 * Description: Function that returns the sum of all the data (n) of a list
 * Return: Sum, else return 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return (0);

	return (head->n + sum_dlistint(head->next));
}
