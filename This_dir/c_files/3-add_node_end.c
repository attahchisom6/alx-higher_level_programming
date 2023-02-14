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
/*if the link (head) is empty, then head point  to new link*/
	end = *head;
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

int main(void)
{
    list_t *head;

    head = NULL;
    add_node_end(&head, "Anne");
    add_node_end(&head, "Colton");
    add_node_end(&head, "Corbin");
    add_node_end(&head, "Daniel");
    add_node_end(&head, "Danton");
    add_node_end(&head, "David");
    add_node_end(&head, "Gary");
    add_node_end(&head, "Holden");
    add_node_end(&head, "Ian");
    add_node_end(&head, "Ian");
    add_node_end(&head, "Jay");
    add_node_end(&head, "Jennie");
    add_node_end(&head, "Jimmy");
    add_node_end(&head, "Justin");
    add_node_end(&head, "Kalson");
    add_node_end(&head, "Kina");
    add_node_end(&head, "Matthew");
    add_node_end(&head, "Max");
    add_node_end(&head, "Michael");
    add_node_end(&head, "Ntuj");
    add_node_end(&head, "Philip");
    add_node_end(&head, "Richard");
    add_node_end(&head, "Samantha");
    add_node_end(&head, "Stuart");
    add_node_end(&head, "Swati");
    add_node_end(&head, "Timothy");
    add_node_end(&head, "Victor");
    add_node_end(&head, "Walton");
    print_list(head);
    return (0);
}
