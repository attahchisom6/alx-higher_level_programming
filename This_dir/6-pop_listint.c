#include "lists.h"

/**
 * pop_listint - This functio  will delete a node from the
 * begining of a link
 * @h:pointer to a pointer to the firstnode of the link
 *
 * Return:link without the deleted node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	size_t p;

	if (head == NULL || *head == NULL)
		return (0);

	p = (*head)->n;
	temp = *head;/*hold head temporarily*/
	*head = (*head)->next;/*move to the next node*/
	free(temp);/*delete temp*/

	return (p);
}

int main(void)
{
	listint_t *head = NULL;
	int n;

	add_nodeint_end(&head, 0);
	add_nodeint_end(&head, 1);
	add_nodeint_end(&head, 2);
	add_nodeint_end(&head, 3);
	add_nodeint_end(&head, 4);
	add_nodeint_end(&head, 98);
	add_nodeint_end(&head, 402);
	add_nodeint_end(&head, 1024);
	print_listint(head);

	n = pop_listint(&head);
	printf("-%d\n", n);
	print_listint(head);

	n = pop_listint(&head);
	printf("-%d\n", n);
	print_listint(head);
	free_listint2(&head);
	printf("%p\n", (void *)head);
	return (0);
}

