#include "sort.h"
#include <stdbool.h>

/**
 * _swaps the address of two nodes, thus swaping the node itself
 * @n1: first node
 * @n2: second node
 * @sig: signal telling swap which node to swap
 *
 * Return: void
 */

void _swap(listint_t **n1, listint_t **n2, int sig)
{
	listint_t *temp1, *temp2;

	temp1 = *n1;
	temp2 = *n2;

	temp1->next = temp2->next;
	temp2->prev = temp1->prev;

	if (temp1->prev)
		temp1->prev->next = temp2;
	if (temp2->next)
		temp2->next->prev = temp1;
	temp1->prev = temp2;
	temp2->next = temp1;

	if (sig == 0)
		*n1 = temp2;
	else
		*n2 = temp1;
}

/**
 * head_sort - sorts a list in the forward direction in a DLL
 * @list:a double pointer to the head of the linked list
 * @ptt: a pointer to the largest element in the list
 * max_h:max limit of the list or array
 *
 * Return: void
 */

void head_sort(listint_t **ptr, listint_t **max_h, listint_t **list)
{
	listint_t *temp;

	temp = *ptr;
	while (temp != *max_h && temp->next != *max_h)
	{
		if (temp->n > temp->next->n)
		{
			_swap(&temp, &(temp->next), 0);

			if (temp->prev == NULL)
				*list = temp;
			print_list(*list);
		}
		temp = temp->next;
	}
	/*after all the above temp will now hold the biggest value*/
	*ptr = *max_h = temp;

}

/**
 * tail_sort - sort the list in backward direcfion in a DLL
 * @list: a double pointer to the first element of the list
 * @ptr:pointer pointing to the smallest element of the list
 * @min_t:min limit o the list or array
 *
 * Return: void
 */

void tail_sort(listint_t **ptr, listint_t **min_t, listint_t **list)
{
	listint_t *temp;

	temp = *ptr;
	while (temp != *min_t && temp->prev != *min_t)
	{
		if (temp->n < temp->prev->n)
		{
			_swap(&(temp->prev), &temp, 1);
			if (temp->prev->prev == NULL)
				*list = temp->prev;
			print_list(*list);
		}
		temp = temp->prev;
	}
	/*After all these temp will now hold the small value*/
	*ptr = *min_t = temp;
}

/**
 * cocktail_sort_list - sorts a list using the cocktail algorithm,
 * whichvis a generalized case of Bubble sort algorithm
 * @list: double pointer to the first element of the list
 * Return: void
 */

void cocktail_sort_list(listint_t **list)
{
	listint_t *ptr;
	listint_t *min_t, *max_h;
	if (!list)
		return;

	min_t = max_h = NULL;

	ptr = *list;
	do {
		head_sort(&ptr, &max_h, list);
		tail_sort(&ptr, &min_t, list);
	} while (min_t != max_h);
}
