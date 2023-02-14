#include "my_shell.h"

/**
 * addsep_end - this function will aadd a separator at the end
 * of a list
 * @head:a double pointer that points to head
 * @sep:char sep, to be add to the last node
 *
 * Return:pointer to the last node
 */

sep_t *addsep_end(sep_t **head, char sep)
{
	sep_t *new, *end;

	new = malloc(sizeof(sep_t));
	if (new == NULL)
		return (NULL);
	new->sep = sep;
	new->next = NULL;

	end = *head;
	if (end == NULL)
		*head = new;
	else
	{
		while (end->next != NULL)
			end = end->next;
		end->next = new;
	}
	return (*head);
}

/**
 * free_sep - this function will free the memory accumulated by the separator
 * @head: double pointer to the first node
 *
 * Return:void
 */

void free_sep(sep_t **head)
{
	sep_t *curr, *temp;
	
	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * addline_end - this function will add a command line at the
 * end of a list
 * @head:a double pointer that points to head
 * @line:pointer to the command line
 *
 * Return:pointer to the added end
 */

line_t *addline_end(line_t **head, char *line)
{
	line_t *new, *end;

	new = malloc(sizeof(line_t));
	if (new == NULL)
		return (NULL);
	new->line = line;
	new->next = NULL;

	end = *head;
	if (end == NULL)
		*head = new;
	else
	{
		while(end->next != NULL)
			end = end->next;
		end->next = new;
	}
	return (*head);
}

/**
 * free_line - a function to free memory accumulated by
 * command line
 * @head:a double pointer to head
 *
 * Return:void
 */

void free_line(line_t **head)
{
	line_t *curr, *temp;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}
