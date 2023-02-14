#include "main.h"

extern char **environ;

/**
 * check_env - function to compare the users input string to the
 * enviromental variable
 * @str:input string
 * env:enviromental variable
 * 
 * Return:1 on success, 0 on failure
 */

int check_env(const char *str, char *env)
{
	int p;

	p = 0;
	while (env[p] != '\0')
	{
		if (env[p] == '=')
			break;
		if (env[p] != str[p])
			return (0);
		p++;
	}
	return (1);
}

/**
 * _get_env - function to search the enviromental variable and compare
 * with user's input string and prints it if it exists
 * @usr_str:users input string
 *
 * Return:void
 */

char *_getenv(const char *usr_str)
{
	int p = 0, k;

	while (environ[p] != NULL)
	{
		k = check_env(usr_str, environ[p]);
		if (k != 0)
		{
			usr_str = environ[p];
			break;
		}
		p++;
	}
	return (environ[p]);
}

/**
 * main - to test and print string from above function
 *
 * Return:0 on success
 */

int main(int ac, char **av)
{
	int p = 1;
	char *buff;

	if (ac < 2)
	{
		printf("Usage: %s PATH_TO_ENV_VAR ...\n", av[0]);
		exit(2);
	}

	while (av[p] != NULL)
	{
		buff = _getenv(av[p]);
		printf("%s\n", buff);
		p++;
	}
	return (0);
}
