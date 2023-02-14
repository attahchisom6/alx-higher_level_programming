#include "my_shell.h"

/**
 * cmp_env - compares given name with penv variables
 * @name:given name
 * @envp:enviroment variables
 *
 * Return:non zero value if match is found
 */

int cmp_env(const char *name, const char *penv)
{
	int k = 0;

	while (penv[k] != '=')
	{
		if (penv[k] != name[k])
			return (0);
		k++;
	}
	return (k + 1);
}

/**
 * _genenv - search and get an enviroment variable it exist
 * @name:user input
 * @_environ:enviroment variable
 *
 * Return:pointer to the found varable else returns NULL
 */

char *_getenv(const char *name, char **_environ)
{
	int k = 0, mov = 0;
	char *ptr = NULL;

	while (_environ[k] != NULL)
	{
		mov = cmp_env(name, environ[k]);
		if (mov != 0)
		{
			ptr = _environ[k];
			break;
		}
		k++;
	}
	return (ptr + mov);
}

/**
 * print_env - prints the enviroment variables
 * @mshell:pointer to my data stucture
 *
 * Return: 1 on success
 */

int print_env(m_data *mshell)
{
	int k, p;

	for (p = 0; mshell->_environ[p] != NULL; p++)
	{
		k = 0;
		while (mshell->_environ[p][k] != '\0')
			k++;
		write(STDOUT_FILENO, mshell->_environ[p], k);
		write(STDOUT_FILENO, "\n", 1);
	}
	mshell->status = 0;
	return (0);
}
