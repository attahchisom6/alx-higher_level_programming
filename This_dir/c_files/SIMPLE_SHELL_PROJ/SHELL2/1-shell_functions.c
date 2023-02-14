#include "main.h"

/**
 * store_token - this is a function to assign a memory to the delimeter used
 * and token (splitted string by stttok)
 * @token:the splitted string (substring)
 *
 * Return:pointer to splitted string
 */

char **store_token(char *buffer)
{
	int k = 0;
	int size = 64;
	char *memory;
	char delim[] = {" \t\n\r\a"};
	char **mem;

	mem = malloc(size * sizeof(char *));
	if (mem == NULL)
	{
		free(mem);
		exit(1);
	}

	memory = strtok(buffer, delim);
	while (memory != NULL)
	{
		mem[k] = memory;

		if (k > size)
			mem = malloc(k * sizeof(char *));
		if (mem == NULL)
		{
			free(mem);
			exit(2);
		}
		memory = strtok(NULL, delim);
		k++;
	}
	mem[k] = NULL;
	return (mem);
}

/**
 * read_line - function to read imput from user
 * @buffer:a momory location to store user input
 *
 * return:void
 */

char *read_line(void)
{
	size_t buff_len = 0;
	char *buffer = NULL;
	ssize_t nread;

	nread = getline(&buffer, &buff_len, stdin);

	if (nread == -1)
	{
		if (feof(stdin))
		{
			perror("no input");
			exit(1);
		}
	}
	return (buffer);
}
