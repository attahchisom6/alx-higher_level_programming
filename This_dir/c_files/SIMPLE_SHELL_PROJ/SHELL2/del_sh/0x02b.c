#include "main.h"

my_build array[] =
        {
                {"exit", my_exit},
		{"env", my_env},
        };


void my_exit(char **args)
{
	exit(0);
}


void my_env(char **args)
{
	int i;
	char **env;

	for (i = 0; env[i] != NULL; i++)
	{
		printf("%s\n", env[i]);
	}
}

int num_builtin()
{
	return (sizeof(array) / sizeof(my_build));
}

alias_s alias[] =
{
	{"/bin/ls", "ls", aliasp},

	{"/bin/ls", "ls -l", aliasp},
};

char *aliasp(char **args)
{
	int k = 0;
	while (alias[k].pname != NULL)
	{
		if (strcmp(args[0], alias[k].pname) == 0)
		{
			return (alias[k].real_name);
		}
		k++;
	}
	return (NULL);
}

int alias_size()
{
	return (sizeof(alias) / sizeof(alias_s));
}
