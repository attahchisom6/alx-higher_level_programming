#include "main.h"

/**
 * _strlen - function to get the kength of a string
 * @str:spointer to the string whose lenght is sought
 *
 * Return:lenght of string
 */

size_t _strlen(char *str)
{
	size_t p = 0;

	while (str[p] != '\0')
	{
		p++;
	}
	return (p);
}

/**
 * main - run any command with their full path without
 * any argument
 *
 * Return:0 on success
 */

int main(void)
{
	size_t p = 0;
	int k;
	size_t buff_len = 10;
	pid_t child_pid;
	char *buffer;
	char *argv[] = {NULL, NULL};

	buffer = malloc(10);
	if (buffer == NULL)
	{
		free(buffer);
		return (-1);
	}


	while (buffer != NULL)
	{
		printf("#cisfun$ ");
		getline(&buffer, &buff_len, stdin);

		if (feof(stdin))
		{
			break;
		}

		child_pid = fork();

		if (child_pid < 0)
		{
			perror("Error: Van't initiate child process");
			exit(1);
		}
		else if (child_pid == 0)
		{
			int g;

			if (buffer[0] == 10)
				continue;
			p = strlen(buffer);
			buffer[p - 1] = 0;
			argv[0] = buffer;
			g = execve(argv[0], argv, NULL);
			if (g < 0)
			{
				perror("./shell");
				exit(2);
			}
		}
		if (child_pid > 0)
		{
			wait(&k);
			break;
		}
	}
	return (0);
}

