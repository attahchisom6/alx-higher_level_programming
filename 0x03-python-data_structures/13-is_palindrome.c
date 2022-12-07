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
		/*if the list is even fast gets to NULL*/
		if (fast == NULL)
		{
			mid = slow->next;
			break;
		}
		/*if the list is odd fast->next gets to NULL*/
		/*we skip the middle and store it in mid*/
		if (fast->next == NULL)
		{
			mid = slow->next->next;
			break;
		}
		slow = slow->next;
	}
	mid = reverse_list(&mid);

	while (mid != NULL && temp !=  NULL)
	{

		if (mid->n == temp->n)
		{
			mid = mid->next;
			temp = temp->next;
		}
		else
			return (0);
	}
	if (mid == NULL)
		return (1);
	return (0);
}
