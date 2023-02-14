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

void _swap(listint_t **n1, listint_t **n2)
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
}

listint_t *create_list(int *array, size_t size)
{
	listint_t *node, *list;
	int *temp;

	list = NULL;
	while (size--)
	{
		node = malloc(sizeof(listint_t));
		if (!node)
			return (NULL);
		temp = (int *)&node->n;
		*temp = array[size];
		node->next = list;
		node->prev = NULL;
		list = node;
		if (list->next)
			list->next->prev = list;
	}
	return (list);
}

int main(void)
{
	listint_t *list = NULL;
	int array[] = {5, 4, 3, 2, 1};
	size_t n;

	n = sizeof(array) / sizeof(array[0]);
	list = create_list(array, n);
	if (list)
	{
		_swap(&(list->next), &(list));
		print_list(list);
	}
	free(list);
	list = NULL;
}
