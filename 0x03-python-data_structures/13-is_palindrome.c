#include "lists.h"

/**
 * list_size - this function will get the size of a singly linked
 * list
 * @head:a double pointer to the firt node
 *
 * Return:size of the linked  list
 */

int list_size(listint_t **head)
{
	int size = 0;
	listint_t *curr = *head;
	
	while (curr != NULL)
	{
		curr = curr->next;
		size++;
	}
	return (size);
}

/**
 * get_value_at_idx - this function will get the value of a node
 * give a valid index
 * @head:A double pointer to the first node
 * @idx:index of the node whose value we seek
 *
 * Return:value at the given index
 */

int get_value_at_idx(listint_t **head, int idx)
{
	int k = 0;
	listint_t *curr = *head;
	
	while (curr != NULL)
	{
		if (k == idx)
			break;
		curr = curr->next;
		k++;
	}
	return (curr->n);
}

/**
 * int is_palindrome - this function will check if a singly linked
 * list is a palindrome
 * @head:a double pointer to the first node
 *
 * Return:1 if it is palindrome otherwise 0
 */

int is_palindrome(listint_t **head)
{
	int begin, end;
	
	begin = 0;
	end = list_size(head);

	end--;
	while (begin <= end)
	{
		int g, h;

		g = get_value_at_idx(head, begin);
		h = get_value_at_idx(head, end);
		if (g != h)
			return (0);
		begin++;
		end--;
	}
	return (1);
}
