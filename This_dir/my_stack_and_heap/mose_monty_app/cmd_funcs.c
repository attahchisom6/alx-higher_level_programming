#include "monty.h"

/**
 * mose_push - A function to push a node to top of a stack
 * or bottom of a queue
 * @mose:double pointer to the first node
 * @lnum:line number
 *
 * Return:void
 */

void mose_push(stack_m **mose, unsigned int lnum)
{
	int k, n;

	if (vglob.arg == NULL)
	{
		free_vglob();
		fprintf(stderr, "push %u\n", lnum);
		usage_err();
	}

	k = 0;
	while (vglob.arg[k] != '\0' && vglob.arg[k] != '-')
	{
		if (isdigit(vglob.arg[k]) == 0)
		{
			fprintf(stderr, "push %u\n", lnum);
			free_vglob();
			push_err(lnum);
		}
		k++;
	}

	n = atoi(vglob.arg);
	if (vglob.lifo_fifo == 1)
		add_dmonty_list(mose, n);
	else
		add_dmonty_listend(mose, n);
}

/**
 * mose_pall - function to print all the elements of a stack
 * or queue
 * @mose:double pointer to the first node
 * @lnum:line number
 *
 * Return:void
 */

void mose_pall(stack_m **mose, unsigned int lnum)
{
	stack_m *last, *temp;
	(void)lnum;

	last = *mose;
	while (last != NULL)
		last = last->prev;
	temp = *mose;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}

/**
 * mose_pint - print the elenent at the top of a stack
 * @mose:double pointer to first node
 * @lnum:line number
 *
 * Return:void
 */

void mose_pint(stack_m **mose, unsigned int lnum)
{
	stack_m *last, *temp;
	(void)lnum;

	if (*mose == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", lnum);
		free_vglob();
		exit(EXIT_SUCCESS);
	}

	last = *mose;
	while (last != NULL)
		last = last->prev;
	temp = *mose;
	if (temp != NULL)
		printf("%d\n", temp->n);
}

/**
 * pop - remove the topmost element in a stack
 * @mose: double pointer to the head
 * @lnum:line number
 *
 * Return:void
 */

void mose_pop(stack_m **mose, unsigned int lnum)
{
	stack_m *temp, *last;
	(void)lnum;

	if (*mose == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", lnum);
		free_vglob();
		exit(EXIT_SUCCESS);
	}

	last = *mose;
	while (last != NULL)
		last = last->prev;
	if (*mose != NULL)
	{
		temp = *mose;
		*mose = (*mose)->next;
		free(temp);
	}
}

/**
 * mose_swap - swaps two elements at the top of the stack
 * @mose:double pointer to the head
 * @lnum:line number
 *
 * Return:void
 */

void mose_swap(stack_m **mose, unsigned int lnum)
{
	stack_m *top, *second, *last;
	stack_m *temp;
	int k = 0;

	temp = *mose;
	while (temp != NULL)
	{
		temp = temp->next;
		k++;
	}

	if (k < 2)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", lnum);
		free_vglob();
		exit(EXIT_SUCCESS);
	}
	
	last = *mose;
	while (last != NULL)
		last = last->prev;

	top = *mose;
	second = (*mose)->next;
	if (top != NULL)
	{
		top->next = second->next;
		top->prev = second;
		second->prev = NULL;
		second->next = top;
	}
	*mose = second;
}
