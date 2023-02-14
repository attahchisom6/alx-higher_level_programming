#include "lists.h"

/**
 * free_listint_safe - A function to free a list using loops
 * @h:pointer to a pointer that poi ts to the first node
 *
 * Return:size of list that was freed
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t k = 0;
	int sub_val;

	if (h == NULL || *h == NULL)
		return (0);

	while (*h != NULL)
	{
		sub_val = *h - (*h)->next;
		if (sub_val > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			k++;
		}
		else
		{
			free(*h);
			*h = NULL;
			k++;
			break;
		}
	}

	return (k);
}
