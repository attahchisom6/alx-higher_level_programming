#include "monty.h"

/**
 * add_dmonty_list - function to add a node at the front of
 * a doubly linked list
 * @mose:double pointer to the first node
 * @lnum:line number
 * Return: pointer to the new_node
 */

stack_m *add_dmonty_list(stack_m **mose, unsigned int lnum)
{
	stack_m *new;

	new = malloc(sizeof(stack_m));
	if (new == NULL)
	{
		malloc_err();
		free_vglob();
	}

	new->n = lnum;
	new->prev = NULL;
	new->next = *mose;
	if (*mose != NULL)
		(*mose)->prev = new;
	*mose = new;
	return (*mose);
}

/**
 * add_dmonty_listend - add a node at the end of a doubly linked
 * list
 * @mose:double pointer to the first node
 * @lnum:line number
 *
 * Return:pointer to the new node
 */

stack_m *add_dmonty_listend(stack_m **mose, unsigned int lnum)
{
	stack_m *new, *end;

	new = malloc(sizeof(stack_m));
	if (new == NULL)
	{
		malloc_err();
		free_vglob();
	}

	new->n = lnum;
	new->next = NULL;

	end = *mose;
	if (end == NULL)
	{
		new->prev = NULL;
		*mose = new;

		return (new);
	}

	else
	{
		while (end->next != NULL)
			end = end->next;
		end->next = new;
		new->prev = end;

		return (new);
	}
	return (NULL);
}

/**
 * free_dmonty_list - frees a double linked list
 * @mose:pointer to the first node
 *
 * Return:void
 */

void free_dmonty_list(stack_m **mose)
{
	stack_m *temp, *curr, *last;

	last = *mose;
	while (last != NULL)
		last = last->prev;

	curr = *mose;
	while ((temp = curr) != NULL)
	{
		curr = curr->next;
		free(temp);
	}
	*mose = NULL;
}
