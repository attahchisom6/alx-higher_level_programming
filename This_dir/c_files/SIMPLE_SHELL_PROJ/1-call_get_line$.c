#include "main.h"

/**
 * main  - function to gets the number of bytes from a buffer
 * upto a newline
 *
 * Return:0
 */

int main(void)
{
	char *buffer;
	size_t buff_len = 1024;

	buffer = malloc(1024 * sizeof(char));
	if (buffer == NULL)
		return (-1);
	while (buffer != NULL)
	{
		printf("$ ");
		_get_line(buffer, buff_len, stdin);
		printf("%s", buffer);
		exit(0);
	}
	free(buffer);
	return (-1);
}
