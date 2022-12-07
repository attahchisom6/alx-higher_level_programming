#include "lists.h"

/**
 * reverse_list - function to reverse a list
 * @head:a double pointer to the first node
 *
 * Return:pointer to the first node
 */

listint_t *reverse_list(listint_t **head)
{
	listint_t *next;
	listint_t *prev = NULL;
	listint_t *curr = *head;

	while (curr != NULL)
	{
		next = curr->next;
		curr->next = prev;

		prev = curr;
		curr = next;
	}
	*head = prev;

	return (*head);
}

/**
 * is_palindrome - function to checkk if a singly list is a palindrome
 * @head:double pointer to the first node
 *
 * Return:1 if its a palindrome, 0 otherwise
 */

int is_palindrome(listint_t **head)
{
	listint_t *fast = *head, *slow = *head, *temp = *head, *mid = NULL;

	if (*head == NULL || (*head)->next == NULL)
		return (1);

	while (1)
	{
		fast = fast->next->next;
		if (fast == NULL)
		{
			mid = slow->next;
			break;
		}
		if (fast->next == NULL)
		{
			mid = slow->next->next;
			break;
		}
		slow = slow->next;
	}
	mid = reverse_list(&mid);

	while (mid->next != NULL && temp->next != NULL)
	{
		mid = mid->next;
		temp = temp->next;

		if (mid->n != temp->n)
			return (0);
		return (1);
	}
	if (mid == NULL)
		return (1);
	return (0);
}
