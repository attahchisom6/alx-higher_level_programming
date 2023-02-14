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
		fprintf(stderr, "push %u\n", lnum);
		usage_err();
		free_vglob();
		exit(EXIT_FAILURE);
	}

	k = 0;
	while (vglob.arg[k] != '\0' && vglob.arg[k] != '-')
	{
		if (isdigit(vglob.arg[k]) == 0)
		{
			fprintf(stderr, "push %u\n", lnum);
			push_err(lnum);
			free_vglob();
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
