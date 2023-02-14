#include "monty.h"

/**
 * usage_err - print all usage err
 * Return: always failure
 */

int usage_err(void)
{
	dprintf(2, "monty file\n");
	dprintf(2, "USAGE: monty file\n");
	return (EXIT_FAILURE);
}

/**
 * fopen_err - print error when file can't be opened
 * @filename:name of the given file
 * Return:always failure
 */

int fopen_err(char *filename)
{
	dprintf(2, "Error: can't open %s\n", filename);
	return (EXIT_FAILURE);
}

/**
 * instruction_err - prints err when the user's command is
 * not a valid instruction
 * @lnum:line number
 * @opcode:opcode instruction
 *
 * Return:always failure
 */

int instruction_err(unsigned int lnum, char *opcodes)
{
	dprintf(2, "L%u: unknown instruction %s\n", lnum, opcodes);
	
	return (EXIT_FAILURE);
}

/**
 * malloc_err - prints err memory can't be allocated
 *
 * Return:void
 */

int malloc_err(void)
{
	dprintf(2, "malloc failed\n");
	return (EXIT_FAILURE);
}

/**
 * push_err - prints err msgs when it is not possible to add
 * to a stack or queue
 * @lnum:line number
 *
 * Return:always failure
 */

int push_err(unsigned int lnum)
{
	dprintf(2, "L%u: usage: push integer", lnum);
	return (EXIT_SUCCESS);
}
