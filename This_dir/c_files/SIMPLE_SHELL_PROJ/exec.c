#include "main.h"

/**
 * main - to examine how execv works
 *
 * Return:0 on success
 */

int main(void)
{
	int k;

	char *argv[] = {"/bin/ls", "-l", "/usr/", NULL};
	printf("before execution\n");
	k = execve(argv[0], argv, NULL);
	if (k == -1)
	{
		perror("Error:");
	}
	printf("After execution\n");
	return (0);
}
