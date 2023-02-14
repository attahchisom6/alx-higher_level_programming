#include "main.h"

extern char **environ;

/**
 * _strlen - function to get the lenght of a string
 * @str:pointer to a string
 *
 * Return:lenght of string
 */

int _strlen(const char *str)
{
	int p = 0;

	while (str[p] != '\0')
	{
		p++;
	}
	return (p);
}

/**
 * check_env - function to check if user input string matches
 * with enviromental variable
 * @usr_str:user input string
 * @env:wnviroment variable
 */

int check_env(const char *usr_str, char *env)
{
	int p = 0;

	while (env[p] != '\0')
	{
		if (env[p] == '=')
			break;
		if (env[p] != usr_str[p])
			return (0);
		p++;
	}
	return (1);
}

/**
 * _setenv - function to add or change the enviromental variabe
 * @name:name of env varaiable
 * @value:value contained by name
 * @:overwrite:int data type, overwrite it it is non zero
 * 
 * Return:0 on success, -1 on failure
 */

int _setenv(const char *name, const char *value, int overwrite)
{
	char *buffer;
	int k, p, r, q, sum, g;

	if (name == NULL || value == NULL)
		return (-1);

	r = _strlen(name) + 1;
	q = _strlen(value) + 1;
	sum = r + q;
	buffer = malloc(sum * sizeof(char));
	if (buffer == NULL)
		return (-1);

	while (name[p] != '\0')	
	{
			
		buffer[p] = name[p];
			
		p++;
		
	}	
	buffer[p++] = '=';

		
	while (value[k] != '\0')
		
	{
		buffer[p] = value[k];
		k++;
		p++;
	}	
	buffer[p] = 0;

	while (environ[p] != NULL)
	{
		g = check_env(name, *environ);
		if (g != 0 && overwrite != 0)
		{
			environ[p] = buffer;
			break;
		}
		if (g != 0 && overwrite == 0)
			break;
		if (buffer[p] == '\0')
		{
			environ[p] = buffer;
			environ[++p] = NULL;
			break;
		}
		p++;
	}
	return (0);
}

/**
 * main - function to test _setenv
 *
 * Return:0
 */

int main(void)
{
	int k = 0, p;

	p = _setenv("OLDPWD", "MASTERMOSE", 1);
	printf("%d\n\n", p);
	while (environ[k] != NULL)
	{
		printf("%s\n", environ[k]);
		k++;
	}
	return (0);
}

