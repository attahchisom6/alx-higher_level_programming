#include "monty.h"

/**
 * mose_add - add the top 2 element in a stack
 * @mose:a double pointer to the head
 * @lnum:line number
 *
 * Return:void
 */

void mose_add(stack_m **mose, unsigned int lnum)
{
	stack_m *top, *second_top, *last;
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
		fprintf(stderr, "L%u: can't add stack too short\n", lnum);
		free_vglob();
		exit(EXIT_FAILURE);
	}

	top = *mose;
	second_top = (*mose)->next;

	if (top != NULL)
		second_top->n = second_top->n + top->n;

	mose_pop(mose, top->n);
	/*mose = second_top*/
}

/**
 * nop - does nothing to the stack
 * @mose:double pointer to the first node
 * @lnum:line number
 *
 * Return:void
 */

void mose_nop(stack_m **mose, unsigned int lnum)
{
	(void)mose;
	(void)lnum;

	return;
}

/**
 * mose_sub: functions to subtract the top element of the stack from
 * the second top element
 * @mose:double pointer to the first elment
 * @lnum: line number
 *
 * Return: void
 */

void mose_sub(stack_m **mose, unsigned int  lnum)
{
	stack_m *top, *second_top, *last, *temp;
	unsigned int k = 0;

	temp = *mose;
	while (temp != NULL)
	{
		temp = temp->next;
		k++;
	}

	if (k < 2)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", lnum);
		free_vglob();
		exit(EXIT_FAILURE);
	}
	
	last = *mose;
	while (last != NULL)
		last = last->prev;

	top = *mose;
	second_top = (*mose)->next;

	if (top != NULL)
		second_top->n = second_top->n - top->n;

	*mose = second_top;
	free(top);
}

/**
 * mose_div - functions to divide the second top elenent by the top
 * element
 * @mose:a double pointer to the first node
 * @lnum:line number
 *
 * Return: void
 */

void mose_div(stack_m **mose, unsigned int lnum)
{
	stack_m *top, *second_top, *temp;
	unsigned int k = 0;

	temp = *mose;
	while (temp != NULL)
	{
		temp = temp->next;
		k++;
	}

	if (k < 2)
	{
		fprintf(stderr, "L%u: can't div, stack too short\n", lnum);
		free_vglob();
		exit(EXIT_FAILURE);
	}

	top = *mose;
	second_top = (*mose)->next;

	if (top != NULL)
	{
		if (top->n == 0)
		{
			fprintf(stderr, "L%u: division by Zero\n", lnum);
			free_vglob();
			exit(EXIT_FAILURE);
		}

		second_top->n = second_top->n / top->n;
	}

	mose_pop(mose, top->n);
}

/**
 * mose_mul - functions to mutiply the top element and the second top
 * element
 * @mose:double pointer to the first element
 * @lnum: line number
 *
 * Return: void
 */

void mose_mul(stack_m **mose, unsigned int lnum)
{
	stack_m *top, *second_top, *temp;
	unsigned int k = 0;

	temp = *mose;
	while (temp != NULL)
	{
		temp = temp->next;

		k++;
	}

	if (k < 2)
	{
		fprintf(stderr, "L%u: can't mul, stack too short\n", lnum);
		free_vglob();
		exit(EXIT_FAILURE);
	}

	top = *mose;
	second_top = (*mose)->next;

	if (top != NULL)
		second_top->n = second_top->n * top->n;

	mose_pop(mose, top->n);
}
