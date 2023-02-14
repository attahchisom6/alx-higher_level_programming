#include "main.h"

/**
 * main - function call my_strtok function
 * Return:0 if success
 */

int main(void)
{
	char *buffer;
	size_t buff_len = 1024;
	char *arr;

	buffer =  malloc(1024);
	while (buffer != NULL)
	{
		printf("$ ");
		getline(&buffer, &buff_len, stdin);
		printf("input string to be broken: %s", buffer);

		arr =  my_strtok(buffer, " ");
		while (arr != NULL)
		{
			printf("%s\n", arr);
			arr = my_strtok(NULL, " ");
		}
		exit(0);
	}
	return (0);
}
