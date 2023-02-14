#include "sort.h"

/**
 * insertion_sort_list - a function to sort a double linked list in
 * ascending order
 * @list: double pointer to the first node of the list
 *
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *temp, *head;

	if (list == NULL)
		return;

	head = *list;
	while (head != NULL)
	{
		while (head->next && (head->n > head->next->n))
		{
			temp = head->next;
			head->next = temp->next;
			temp->prev = head->prev;
			if (head->prev)
				head->prev->next = temp;
			if (temp->next)
				temp->next->prev = head;
			head->prev = temp;
			temp->next = head;
			if (temp->prev)
				head = temp->prev;
			else
				*list = temp;
			print_list(*list);
		}
		head = head->next;
	}
}
