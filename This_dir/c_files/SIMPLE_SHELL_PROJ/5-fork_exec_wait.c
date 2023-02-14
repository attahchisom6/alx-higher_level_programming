#include "main.h"

/**
 * main - function to execute a command i  5 different child process
 * of the parent process
 *
 * Return: 0 on success
 */

int main(void)
{
	pid_t my_pid;
	pid_t child_pid;
	int status, k = 0, p;
	char *argv[] = {"bin/ls", "-l", "tmp/", NULL};

	my_pid = getpid();
	if (my_pid < 0)
		perror("Error:");

	while (k < 5)
	{
		child_pid = fork();

		if (child_pid < 0)
		{
			perror("Error:");
			return (1);
		}
		else if (child_pid == 0)
		{
			printf(" Attah ID: %u working ID %u\n", getppid(), getpid());
			exit(0);
		}
		k++;
	}
	for (k = 0; k < 5; k++)
		wait(&status);

		if (child_pid > 0)
			printf("parent pid: %u\ncurrent pid: %u\n", my_pid, child_pid);

	p = execve(argv[0], argv, NULL);
	if (p < 0)
		;
	return (0);
}
