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
 * modenv_str - this function will print the enviroment variable
 * starting from the character after the equal '=' sign
 * @env_string:the enviroment variable to read
 *
 * Return:pointer to the modified enviroment string, otherwise
 * return NULL
 */

char *modenv_str(char *env_str)
{
	int p = 0;

	while (env_str[p] != '\0')
	{
		if (env_str[p] == '=')
			return (env_str + p + 1);
		p++;
	}
	return (NULL);
}

/**
 * _getenv - function to seach and print an enviroment variable
 * @name: name to compare to enc variable
 *
 * Return:The string if its the same, return NULL otherwise
 */

char *_getenv(const char *name)
{
	int k, p = 0;

	while (environ[p] != NULL)
	{
		k = check_env(name, environ[p]);
		if (k != 0)
		{
			name = environ[p];
			return (modenv_str(environ[p]));
		}
		p++;
	}
	return (NULL);
}
