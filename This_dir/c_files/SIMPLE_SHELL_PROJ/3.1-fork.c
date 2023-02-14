#include "main.h"

/**
 * main - function to father(parent) process
 *
 * Return:0
 */

int main(void)
{
	pid_t child_pid;
	pid_t my_pid;

	child_pid = fork();
	if (child_pid == -1)
	{
		perror("Error: ");
		return (-1);
	}
	my_pid = getpid();
	printf("my_pid is %u\n", my_pid);

	if (child_pid == 0)
	{
		printf("(%u) Noooooo!\n", my_pid);
		return (1);
	}
	else
	{
		printf("(%u) says to %u, i am your father\n", my_pid, child_pid);
		return (2);
	}
	return (0);
}
