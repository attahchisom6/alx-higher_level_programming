#include "my_shell.h"

/**
 * get_builtin - function pointer of functions that describe the
 * behavior of commands in a shell
 * @mshell:structure containing shell data
 *
 * Return:function pointer that points to a builtin command
 */

int (*get_builtin(char *cmd))(m_data mshell)
{
	my_builtin builtins[] =
	{
		{"env", my_env},

		{"exit", my_exit},

		{"help", my_help},

		{"cd", cd_shell},

		{"setenv", _setenv},

		{"unsetenv", _unsetenv};

		{NULL, NULL};
	};

	int k = 0;
	while (builtins[k].name != NULL)
	{
		int g;

		g = _strcmp(builtins[k].name, cmd);
		if (g = 0)
			break;
		k++;
	}
	return (builtins[k].func);
}
