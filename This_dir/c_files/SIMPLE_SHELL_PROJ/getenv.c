#include "main.h"

extern char **environ;

/**
 * check_env - function to check if the oassed string is an eviromental variable
 * @name: name of env variable
 * @env: environental variable
 *
 * Return: 1 if success, 0 otherwise
 */

int check_env(const char *name, char *env)
{
	int k;

	k = 0;
	while (env[k] != '\0')
	{
		if (env[k] == '=')
			break;
		if (env[k] != name[k])
			return (0);
		k++;
	}
	return (1);
}

/**
 * point_env - function to assign a pointer env string when found
 * @env_str:string to printed
 *
 * Return:pointer to the found string
 */

char *point_env(char *env_str)
{
	int k = 0;

	while(env_str[k] != '\0')
	{
		if (env_str[k] == '=')
			return (env_str + 1);
		k++;
	}
	return (env_str);
}

/**
 * _getenv - function to seach and print an enviroment variable
 * @name: name to compare to enc variable
 *
 * Return:The string if its the same
 */

void _getenv(const char *name)
{
	int k, p = 0;

	while (environ[p] != NULL)
	{
		k = check_env(name, environ[p]);
		if (k != 0)
		{
			name = environ[p];
			break;
		}
		p++;
	}
	printf("%s\n", environ[p]);
}

/**
 * main - function to searc and prunt env variable
 *
 * Return: 0;
 */

int main(int ac, char **av)
{
	int p = 1;

	if (ac < 2)
	{
		printf("Usage: %s PATH_TO_ENV_VAR\n", av[0]);
		exit(2);
	}

	while(av[p] != NULL)
	{
		_getenv(av[p]);
		p++;
	}
	return (0);
}
