#include "main.h"

/**
 * main - function to create a shell
 *
 * Return:0 on success
 */

int main(int ac, char *argv[], char *env[])
{
	(void) ac;
	pid_t child_pid;
	char *str;
	char **memory;

	my_build array[] =
	{
		{"exit", my_exit},
		{"env", my_env},
	};

	while (1)
	{
		printf("#cisfun$ ");
		str = read_line();
		memory = store_token(str);

		if (memory != NULL)
		{
			child_pid = fork();

			if (child_pid < 0)
			{
				perror("No child process initiated");
				exit(1);
			}

			if (child_pid == 0)
			{
				int g;

				g = execve(memory[0], memory, NULL);
				if (g < 0)
				{
					perror(memory[0]);
					exit(2);
				}
			}
			else
			{
				wait(NULL);
			}
		}
	}
	return (0);
}
