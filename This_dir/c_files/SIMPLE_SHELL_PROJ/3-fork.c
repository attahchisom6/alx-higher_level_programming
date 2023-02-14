#include "main.h"

/**
 * main - to create a child process identical to the parent parent process
 *
 * Return:0 on success and -1 on failure
 */

int main(void)
{
	pid_t parent_pid;
	pid_t child_pid;

	printf("Before fork: \n");
	child_pid = fork();
	if (child_pid == -1)
	{
		perror("Error: ");
		return (-1);
	}
	printf("After fork: \n");
	parent_pid = getpid();
	printf("child_pid = %u and parent_pid = %u\n", child_pid, parent_pid);
	return (0);
}
