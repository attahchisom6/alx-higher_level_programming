#include "lists.h"

/**
 * node_len - function to get the size of a node
 * @h:pointer to first node
 *
 * Return:no elements in the nodw
 */

int node_len(listint_t *h)
{
	int p;

	while (h != NULL)
	{
		h = h->next;
		p++;
	}
	return (p);
}

/**
 * insert_nodeint - function to insert a node at a given position
 * if the losition exiats
 * @head:pointer to a pointer that points to first node
 * @idx:index to insert element
 * @n:integer data to insert at new node
 * Return:pointer to the inserted  node
 */

listint_t *insert_nodeint_at_index(listint_t **head,
		unsigned int idx, int n)
{
	listint_t *new, *temp;
	size_t k = 0;
	int p;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	p = node_len(*head);
	if (idx < 0 || idx > p)
		return (NULL);
	else if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		/*we will now exclude case k = 0*/
		/*i.e we  will start at case k + 1*/
		temp = *head;
		while (k + 1 < idx)
		{
			temp = temp->next;
			k++;
		}
		new->next = temp->next;
		temp->next = new;
	}
	return (new);
}

int main(void)
{
	listint_t *head = NULL;

	add_nodeint_end(&head, 0);
	add_nodeint_end(&head, 1);
	add_nodeint_end(&head, 2);
	add_nodeint_end(&head, 3);
	add_nodeint_end(&head, 4);
	add_nodeint_end(&head, 98);
	add_nodeint_end(&head, 402);
	add_nodeint_end(&head, 1024);
	print_listint(head);
	printf("----------+-------------------------\n");
	insert_nodeint_at_index(&head, 5, 4096);
	print_listint(head);
	free_listint2(&head);
	return (0);
}
