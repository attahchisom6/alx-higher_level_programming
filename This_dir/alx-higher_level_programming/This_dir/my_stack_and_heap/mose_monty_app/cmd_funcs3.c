#include "monty.h"

/**
 * mose_mode - functions to get the remainder of the division between
 * the top element and the second top elenent
 * mose:double pointer to the first element
 * @lnum: line number
 *
 * Return:void
 */

void mose_mod(stack_m **mose, unsigned int lnum)
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
		dprintf(2, "L%u: can't mod, stack too short\n", lnum);
		free_vglob();
		exit(EXIT_FAILURE);
	}

	top = *mose;
	second_top = (*mose)->next;

	if (top != NULL)
	{
		if (top->n == 0)
		{
			fprintf(stderr, "L%u: division by zero\n", lnum);
			free_vglob();
			exit(EXIT_FAILURE);
		}

		second_top->n = second_top->n % top->n;
	}

	mose_pop(mose, top->n);
}

/**
 * mose_pchar - a function to print the  value of the top element
 * @mose:double pointer to the first element
 * @lnum:line number
 *
 * Return: void
 */

void mose_pchar(stack_m **mose, unsigned int lnum)
{
	stack_m *top, *temp;
	unsigned int k = 0;

	temp = *mose;
	while (temp != NULL)
	{
		temp = temp->next;

		k++;
	}

	if (k == 0)
	{
		dprintf(2, "L%u: can't pchar, stack empty\n", lnum);
		free_vglob();
		exit(EXIT_FAILURE);
	}

	top = *mose;
	if (top != NULL)
	{
		if (top->n < 0 || top->n > 127)
		{
			dprintf(2, "L%u:  value out of range\n", lnum);
			free_vglob();
			exit(EXIT_FAILURE);
		}

		printf("%c\n", top->n);
	}
}

/**
 * mose_pstr - functiin to print each character in the stack as an array of char
 * @mose:double pointer to the first node
 * @lnum:line nunber
 *
 * Return:void
 */

void mose_pstr(stack_m **mose, unsigned int lnum)
{
	stack_m *top;
	/*char str[80];
	unsigned int k = 0;*/

	top = *mose;
	if (top == NULL)
	{
		free_vglob();
		exit(EXIT_FAILURE);
	}

	while (top != NULL /*&& str[k] != '\0'*/)
	{
		if (top->n <= 0 || top->n > 127)
			break;
		printf("%c", top->n);
		/*str[k] = (char) top->n;*/
		top = top->next;
		/*k++;*/
	}
	top->n = '\0';
	/*str[k] = '\0';*/
	/*printf("%s\n", str);*/
	putchar('\n');
}

/**
 * mose_rotl - functions to rotate top element to the last element and the
 * second top element to the top element
 * @mose:double pointer to the first elemenr
 * @lnum:line number
 *
 * Return:void
 */

void mose_rotl(stack_m **mose, unsigned int lnum)
{
	stack_m *top, *second_top, *last;

	top = *mose;
	second_top = (*mose)->next;

	last = *mose;
	while (last->next != NULL)
		last = last->next;

	last->next = top;
	top->next = NULL;
	*mose = second_top;
}

/**
 * mose_rotr - functions to reverse the stack
 * @mose:double oointer to the first element
 * @lnum:line number
 *
 * Return:void
 */

void mose_rotr(stack_m **mose, unsigned int lnum)
{
	stack_m *top, *last, *top_next;

	top = *mose;
	/*if (top != NULL)
	{
		top_next = top->next;
		top->next = last;
		last->prev = NULL;
		last->next = top;
		top->prev = last;
		top->next = top_next;
	}

	*mose = last->next;

	*mose = (*mose)->next;
	top->next = (*mose)->next;
	top->prev = *mose;
	(*mose)->prev = NULL;
	(*mose)->next = top;*/
}
