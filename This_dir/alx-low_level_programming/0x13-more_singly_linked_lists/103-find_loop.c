#include "lists.h"

/**
 * find_listint_loop - function to find a loop in a linked list;
 * @head:pointer to a pointer that points to the first loop
 *
 * Return:address of node, where loop atart, otherwise NULL;
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *A = head;
	listint_t *B = head;

	if (head == NULL)
		return (NULL);
	while (A != NULL && B != NULL && A->next != NULL)
	{
		A = A->next->next;
		B = B->next;

		if (A == B)
		{
			B = head;
			while (B != A)
			{
				B = B->next;
				A = A->next;
			}
			return (A);
		}
	}
	return (NULL);
}
