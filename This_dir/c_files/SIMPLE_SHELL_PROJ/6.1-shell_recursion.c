#include "main.h"

/**
 * shell_recursion - prints shell recursively
 *
 * Return:void
 */

void shell_recursion(void)
{
	size_t p;
	int status;
	pid_t child_pid;
	char *buffer;
	char *argv[] = {NULL, NULL};
	size_t buff_len = 10;

	buffer = malloc(10);
	if (buffer == NULL)
	{
		free(buffer);
		return;
	}

	printf("#cisfun$ ");
	getline(&buffer, &buff_len, stdin);
	if (feof(stdin))
		;

	child_pid = fork();

	if (child_pid < 0)
	{
		perror("Child process cant be initiated:");
		exit (1);
	}

	if (child_pid == 0)
	{
		int g;

		if (buffer[0] == 10)
			shell_recursion();
		p = strlen(buffer);
		buffer[p - 1] = 0;

		argv[0] = buffer;
		g = execve(argv[0], argv, NULL);
		if (g < 0)
		{
			perror("./shell");
			exit(2);
		}
		exit(3);
	}
	wait(NULL);
	shell_recursion();
}


int main(void)
{
	shell_recursion();
	exit(0);
}
