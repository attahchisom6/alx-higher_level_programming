#include "main.h"

/**
 * shelll-handle_args - This funtion will handle args passed to main
 * @ac:no of arguments
 * @av:array strings or vectors
 *
 * Return:0 if success
 */

int main(void)
{
	pid_t child_pid, status;
	size_t buff_len = 0;
	ssize_t nread;
	char *buffer = NULL;
	char *str;
	char *argv[] = {"/bin/ls", "-l", "usr/", NULL};
	char *envp[] = {NULL};

	while (1)
	{
		printf("#cisfun$ ");
		nread = getline(&buffer, &buff_len, stdin);
		if (feof(stdin))
			break;
		str = strtok(buffer, " :\n\r\a");
		argv[0] = str;
		argv[1] = NULL;

		child_pid = fork();
		
		if (child_pid == -1)
		{
			perror("No child process initiated");
			exit(1);
		}
		if (child_pid == 0)
		{
			nread = execve(argv[0], argv, envp);
			if (nread == -1)
			{
				perror(argv[0]);
				exit(2);
			}
		}
		else
			wait(&status);
	}
	
	free(buffer);
	buffer = NULL;
	return (0);
}
