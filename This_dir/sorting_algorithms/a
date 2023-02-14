#include "sort.h"

/**
 * create_list - function to create a DLL list from an array
 * @array: list of integer element
 * @size: size of the array
 *
 * Return: pointer to the first node of the list created
 */

listint_t *create_list(int *array, size_t size)
{
	listint_t *node, *list;
	int *temp;

	while (size--)
	{
		node = malloc(sizeof(listint_t));
		if (!node)
			return (NULL);

		temp = (int *)&node->n;
		*temp = array[size];

		node->prev = NULL;
		node->next = list;
		list = node;
		if (list->next)
			list->next->prev = list;
	}
	return (list);
}

int main(void)
{
	int array[] = {19, 48,  99, 71, 13, 52, 96, 73, 86, 7};
	size_t n  = sizeof(array) / sizeof(array[0]);
	listint_t *node = NULL;

	node = create_list(array, n);
	if (!node)
		return (1);

	print_list(node);
	insertion_sort_list(&node);
	print_list(node);
	print_list(node);
	return (0);
}
