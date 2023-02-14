#include "main.h"

int main(void)
{
	pid_t child_pid, status;
	ssize_t nread;
	size_t buff_len = 0;
	char *buffer = NULL;
	char *str;
	char *argv[2];
	char *env[] = {NULL};

	while (1)
	{
		printf("#cisfun$ ");
		nread = getline(&buffer, &buff_len, stdin);
		if (feof(stdin))
			break;
		str = strtok(buffer, "\n\t");
		argv[0] = str;
		argv[1] = NULL;

		child_pid = fork();

		if (child_pid == -1)
		{
			perror("FORK failed");
			exit(1);
		}
		
		if (child_pid == 0)
		{
			nread = execve(argv[0], argv, NULL);
			if (nread == -1)
			{
				perror("cant execute");
				exit(2);
			}
		}
		else
			wait(&status);
		break;
	}
	free(buffer);
	buffer = NULL;
	exit(0);
}
