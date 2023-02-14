#include "lists.h"

/**
 * add_note - this function will add a nods to the beginning of
 * a linked list
 * @head:first link
 * @str:string to be added to link we want to add before head
 *
 * Return:Address of new elemwnt or NULL if it failals
 */

list_t *add_node(list_t **head, const char *str)
{
	char *s;
	size_t p;

	s = strdup(str);
	list_t *new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	p = 0;
	while (str[p] != '\0')
		p++;
		new_node->str = s;
		new_node->len = p;
	/*make next of new node point to head*/
		new_node->next = *head;
	/*move head to poibt to the new node*/
		*head = new_node;

	return (*head);
}

int main(void)
{
    list_t *head;

    head = NULL;
    add_node(&head, "Alexandro");
    add_node(&head, "Asaia");
    add_node(&head, "Augustin");
    add_node(&head, "Bennett");
    add_node(&head, "Bilal");
    add_node(&head, "Chandler");
    add_node(&head, "Damian");
    add_node(&head, "Daniel");
    add_node(&head, "Dora");
    add_node(&head, "Electra");
    add_node(&head, "Gloria");
    add_node(&head, "Joe");
    add_node(&head, "John");
    add_node(&head, "John");
    add_node(&head, "Josquin");
    add_node(&head, "Kris");
    add_node(&head, "Marine");
    add_node(&head, "Mason");
    add_node(&head, "Praylin");
    add_node(&head, "Rick");
    add_node(&head, "Rick");
    add_node(&head, "Rona");
    add_node(&head, "Siphan");
    add_node(&head, "Sravanthi");
    add_node(&head, "Steven");
    add_node(&head, "Tasneem");
    add_node(&head, "William");
    add_node(&head, "Zee");
    print_list(head);
    return (0);
}
