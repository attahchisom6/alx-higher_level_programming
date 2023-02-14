#include "main.h"

my_build array[] =
	{
		{"exit", my_exit},
		{"env", my_env},
	};

void my_exit(char **argv)
{
	exit(0);
}

void my_env(char **argv)
{
	int p = 0;
	char **env;

	while (env[p] != NULL)
	{
		printf("%s\n", env[p]);
		p++;
	}
}

int array_size(void)
{
	return (sizeof(array));
}
