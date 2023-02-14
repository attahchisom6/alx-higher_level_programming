#include "my_shell.h"

/**
 * read_line - this function will read input from user up to eof
 * k_eof:read data from getline
 *
 * Return:user input
 */

char *read_line(int *k_eof)
{
	char *input = NULL;
	size_t buffsize = 0;

	*k_eof = getline(&input, &buffsize, stdin);

	return (input);
}

/**
 * exec_line - find builtins and command
 * @mshell:structure containing shell data
 *
 * Return: 1 on success
 */

/*int exec_line(m_data *mshell)
{
	int (*builtin)(m_data *mshell);
	if (mshell->argv[0] == NULL)
		return (1);
	builtin = get_builtin(mshell->argv[0]);
	if (builtin != NULL)
		return (builtin(mshell));
	return (cmd_exec(mshell));
}*/
