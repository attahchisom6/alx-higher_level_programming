#include "main.h"


int main(int argc, char *argv[], char *envp[])
{

	char *str;
	char **cmd;
	int i;

	(void) argc;

	my_build array[] =
	{
		{"exit", my_exit},
		{"env", my_env},
	};
	
	alias_s alias[] =
	{
		{"/bin/ls", "ls", aliasp},
		{"/bin/ls -l", "ls -l", aliasp},
	};
	while (1)
	{
		printf("($)" );
		str = my_readline();
		cmd = my_token(str);
	if (cmd != NULL)
		{
			for (i = 0; i < num_builtin(); i++)
			{
				if (strcmp(cmd[0], array[i].name) == 0)
				{
					array[i].func(cmd);
				}
			}

			for (i = 0; i < alias_size(); i++)
			{
				if (strcmp(cmd[0], alias[i].pname) == 0)
					alias[i].func(cmd);
			}

			my_execute(cmd);
		}
	}
	return (0);
}
