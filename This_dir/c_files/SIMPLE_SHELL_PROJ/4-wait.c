#include "main.h"

/**
 * main - suspends exwcution of calling process until at least
 * one of child process is terminated
 *
 * Return:0 on succes, -1 on failure
 */

int main(void)
{
	pid_t child_pid;
	int status;
	
	if (child_pid == -1)
	{
		perror("Error :");
		return (1);
	}
	if (child_pid == 0)
	{
		printf("wait, oh wait\n");
		sleep(3);
	}
	else
	{
		wait(&status);
		printf("All is working well now\n");
	}
	return (0);
}
