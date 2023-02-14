#include "lists.h"

/**
 * add_node_end - function to append a node at the end of the link
 * @head:first link
 * @str:strint data to be added to last link
 *
 * Return:pointer to the last link
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *end;
	char *s;
	size_t p = 0;

	s = strdup(str);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	while (str[p] != '\0')
		p++;

	new->str = s;
	new->len = p;
/*mv next of the new node to point to NULL, which shows that*/
/*link should here*/
	new->next = NULL;
/*make end of previous link the new head of new link*/
	end = *head;/*initialize end to head*/
	if (end  == NULL)
		*head = new;

	else
	{
		while (end->next != NULL)
		end = end->next;
		end->next = new;
	}

	return (*head);
}
