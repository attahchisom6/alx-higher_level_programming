#include "my_shell.h"

/**
 * is_searchable_dir - function to check if a path is searchable
 * note: a path is searchable if it is delimited by a semicolon ":"
 * @path:pointer to the path meant to be searched
 * @i:pointer to an integer counter
 *
 * Return:if 1 on success, 0 on failure
 */

int is_searchable_dir(char *path, int *k)
{
	if (path[*k] == ':')
		return (1);

	while (path[*k] != ':' && path[*k] != '\0')
		*k = *k + 1;

	if (path[*k] != '\0')
		*k = *k + 1;
	return (0);
}

/**
 * _which - function to locate a command line argument from the PATH
 * variable
 * @cmd:command line argument
 * @_environ:enviroment variable
 * 
 * Return:the concettenated cmd arg with path var at that point if
 * found
 */

char *_which(char *cmd, char **_environ)
{
	char *path, *ptr_path, *dir, *ptr_token;
	int k, cmd_len, token_len, len;
	struct stat st;

	if (cmd != NULL)
	{
		path = _getenv("PATH", _environ);
		ptr_path = _strdup(path);
		cmd_len = _strlen(cmd);
		ptr_token = my_strtok(ptr_path, ":");
		k = 0;
		while (ptr_token != NULL)
		{
			if (is_searchable_dir(ptr_token, &k) != 0)
				if (stat(cmd, &st) == 0)
					return (cmd);

			token_len = _strlen(ptr_token);
			len = token_len + cmd_len + 2;
			dir = malloc(len * sizeof(char));
			dir = _strcpy(dir, ptr_token);
			dir = _strcat(dir, "/");
			dir = _strcat(dir, cmd);
			dir = _strcat(dir, "\0");

			if (stat(dir, &st) == 0)
			{
				free(ptr_path);
				return (dir);
			}
			free(dir);

			ptr_token = my_strtok(NULL, ":");
		}
		free(ptr_token);

		if (stat(cmd, &st) == 0)
			return (cmd);
		return (NULL);
	}
	if (cmd[0] == '/')
		if (stat(cmd, &st) == 0)
			return (cmd);
	return (NULL);
}

/**
 * is_executable - function to check if a user input is executable
 * @mshell:my data structure
 *
 * Return:non zero number if its executable, 0 if it is not
 */

int is_executable(m_data *mshell)
{
	char *input;
	int k = 0;
	struct stat st;

	input = mshell->argv[0];
	for (; input[k] != '\0'; k++)
	{
		if (input[k] == '.')
		{
			if (input[k + 1] == '.')
				return (0);
			if (input[k + 1] == '/')
				continue;
			else
				break;
		}

		else if (input[k] == '/' && k != 0)
		{
			if (input[k + 1] == '.')
				continue;
			k++;
			break;
		}

		else
			break;
		k++;
	}

	if (k == 0)
		return (0);
	if (stat(&input[k], &st) == 0)
		return (k);

	/*get_error(mshell, 127);*/
	return (-1);
}

/**
 * perm_dir_err:this function will check if a directory had access
 * permision
 * @dir:directory name
 * @mshell:data structure
 *
 * Return:0 on access permision, 1 on error
 */

int perm_dir_err(char *dir, m_data *mshell)
{
	if (dir == NULL)
	{
		/*_get_error(mshell, 127);*/
		return (1);
	}

	if (_strcmp(mshell->argv[0], dir) != 0)
	{
		if (access(dir, X_OK) == -1)
		{
			/*_get_error(mshell, 126);*/
			free(dir);
			return (1);
		}
		free(dir);
	}

	else if (_strcmp(mshell->argv[0], dir) == 0)
	{
		if (access(mshell->argv[0], X_OK) == -1)
		{
			/*_get_error(mshell, 126);*/
			return (1);
		}
	}
	return (0);
}


/**
 * cmd_exec:this function will initiate a child process to run our shell
 * @mshell:data structure
 *
 * Return:1 on success
 */

int cmd_exec(m_data *mshell)
{
	pid_t child_pid;
	int state;
	int exec;
	char *dir;

	exec = is_executable(mshell);
	if (exec == -1)
		return (1);
	if (exec == 0)
	{
		dir = _which(mshell->argv[0], mshell->_environ);
		if (perm_dir_err(dir, mshell) == 1)
			return (1);
	}

	child_pid = fork();

	if (child_pid < 0)
	{
		perror("mshell->argv[0]");
		return (1);
	}
	
	if (child_pid == 0)
	{
		int g;

		if (exec == 0)
			dir = _which(mshell->argv[0], mshell->_environ);
		else
			dir = mshell->argv[0];
		g = execve(&dir[exec], mshell->argv, mshell->_environ);
		if (g < 0)
		{
			perror("mshell->argv[0]");
			return (1);
		}
	}

	else
	{
		do {
			waitpid(child_pid, &state, WUNTRACED);
		} while (WIFEXITED(state) == 0 && WIFSIGNALED(state) == 0);
	}

	mshell->status = state / 256;
		
	return (1);
}
