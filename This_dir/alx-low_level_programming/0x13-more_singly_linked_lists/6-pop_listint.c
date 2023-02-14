#include "lists.h"

/**
 * pop_listint - This functio  will delete a node from the
 * begining of a link
 * @head:pointer to a pointer to the firstnode of the link
 *
 * Return:link without the deleted node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int p;

	if (*head == NULL)
		return (0);

	p = (*head)->n;
	temp = *head;/*hold head temporarily*/
	*head = (*head)->next;/*move to the next node*/
	free(temp);/*delete temp*/

	return (p);
}
