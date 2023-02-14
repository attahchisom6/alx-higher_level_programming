#include "lists.h"

/**
  * *add_node_end - Function that adds a new node at the end of a list
  * @str: pointer to string
  * @head: pointer to new node
  * Return: the address of the new element, or NULL if failed
  */
list_t *add_node_end(list_t **head, const char *str)
{
	int len = 0;
	list_t *new_node = malloc(sizeof(list_t));
	list_t *last = *head;

	if (new_node == NULL)
		return (NULL);

	while (str[len])
		len++;

	new_node->str = strdup(str);
	new_node->len = len;

	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new_node;
	return (new_node);
}



