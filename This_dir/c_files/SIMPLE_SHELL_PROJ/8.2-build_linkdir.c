#include "main.h"

/**
 * Path_s - struct containing path directiries
 * @fir:path durectories
 *
 * Return:a singly linked listcof the path
 */

typedef struct path_s
{
	char *dir;
	struct path_s *next;
} path_t;

/**
 * add_nodepath_end - function to append a node at end of PATH
 * @head:a pointer to a pointer that points to head
 * @dir:data to add at node
 * 
 * Return:pointer to the new node
 */

path_t *add_nodepath_end(path_t **head, char *dir)
{
	path_t *new, *end;

	new = malloc(sizeof(path_t));
	if (new == NULL)
		return (NULL);
	new->dir = dir;
	new->next = NULL;

	end = *head;
	if (end == NULL)
		*head = new;
	else
	{
		while (end != NULL)
		{
			if (end->next == NULL)
			{
				end->next = new;
				break;
			}
			end = end->next;
		}
	}
	return (new);
}


/**
 * print_path: function to print the paths contained in the list
 * @head:pointer to the first node in the link
 *
 * void
 */

void print_path(path_t *head)
{
	while (head != NULL)
	{
		printf("%s\n\n", head->dir);
		head = head->next;
	}
}

/**
 * free_path - function to free heap memory accumulated by each node
 * @head:pointer to the first node
 *
 * Return:void
 */

void free_path(path_t *head)
{
	path_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}

/**
 * main - execution entry point
 *
 * Return:0 on success
 */

int  main(void)
{
	path_t *head = NULL;
	char *str;
	char *arr_str;

	str = _getenv("PATH");

	arr_str = my_strtok(str, ":");
	while (arr_str != NULL)
	{
		add_nodepath_end(&head, arr_str);
		my_strtok(NULL, ":");
	}
	print_path(head);

	free_path(head);
	return (0);
}
