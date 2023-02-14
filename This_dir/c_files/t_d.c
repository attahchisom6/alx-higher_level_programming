#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_nodeint - function to add int data type to the nodes that
 * is to be add in front of a link
 * @head:referwnce or pointer to first element
 * @n:int data to add to the nodes
 *
 * Return:pointer to the added elements
 */

typedef struct Master
{
	char *str;
	int n;
	struct Master *next;
} Mose;

void print_string(Mose *head, int n)
{
	Mose *current, *next_node;

	current = head;
	next_node = current->next;
	while (current != NULL)
	{
		printf("%s\n", head->str);
		printf("%d\n", head->n);
		current = next_node;
	}
}

int main(void)
{
	Mose *head;
	Mose *new;
	Mose hello = {"hello", 5, NULL};
	int n;
	
	head = &hello;
	new = malloc(sizeof(Mose));
	if (new == NULL)
		return (0);
	new->str = strdup("Hello");
	new->n = n;
	new->next = head;
	head = new;

	print_string(head, 7);
	return (0);
}
