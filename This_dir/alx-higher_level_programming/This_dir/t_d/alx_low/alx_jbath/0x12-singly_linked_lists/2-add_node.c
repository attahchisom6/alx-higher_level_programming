#include "lists.h"

/**
 * *add_node - Function that adds a new node at the beginning of a list
 * @str: pointer to string
 * @head: pointer to new new_node
 * Return: the address of the new element, or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	int len = 0;
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	while (str[len])
		len++;

	new_node->str = strdup(str);
	new_node->len = len;

	new_node->next = (*head);
	(*head) = new_node;

	return (*head);
}
