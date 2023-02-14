#include "lists.h"

/**
 * get_nodeint_at_index - function to get the data of a node
 * given any index of the list
 * @head:pointer to the first node of the list
 * @index:index of the node we seek
 *
 * Return:the nth node of the list, given nth index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ind_node;
	unsigned int k = 0;

	ind_node = head;
	if (ind_node == NULL)
		return (NULL);
	while (ind_node != NULL && k < index)
	{
		/*keep on traversing to the next node*/
		/*so long as k < index, but terminate when k = index*/
		ind_node = ind_node->next;
		k++;
	}
	return (ind_node);
}

int main(void)
{
    listint_t *head;
    listint_t *node;

    head = NULL;
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);
    print_listint(head);
    node = get_nodeint_at_index(head, 5);
    printf("%d\n", node->n);
    print_listint(head);
    free_listint2(&head);
    return (0);
}
