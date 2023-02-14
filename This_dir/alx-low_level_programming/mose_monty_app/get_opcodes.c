#include "monty.h"

/**
 * get_opcode - function to compare the opcode with text command
 * and get the appropraite function to execute it
 * @cmd_name:name of text command
 *
 * Return:pointer to rhe function that will execute the opcode
 */

void (*get_opcode(char *cmd_name))(stack_m **, unsigned int)
{
	instruct_t cmd_arr[] = {
		{"push", mose_push},
		{"pall", mose_pall}
	};
	unsigned int k = 0;

	while (cmd_arr[k].opcodes != NULL)
	{
		if (_strcmp(cmd_arr[k].opcodes, cmd_name) == 0)
			break;
		k++;
	}
	return (cmd_arr[k].f);
}
