#include "main.h"

/**
 * append_text_to_file - function to append a string to the end
 * of a file
 * @filename:target file receiving the appending string
 * @text_content:string to be appended
 *
 * Return:1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t fp = 0, k = 0, p = 0;

	if (filename == NULL)
		return (-1);
	 fp = open(filename, O_RDWR | O_CREAT | O_APPEND, 0600);
	if (fp < 0)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[p] != '\0')
			p++;
		k = write(fp, text_content, p);
		if (k < 0)
			return (-1);
	}

	close(fp);
	return (1);
}

int main(int c, char **argv)
{
	int n;

	if (c != 3)
	{
		dprintf(2, "USAGE: %s filename text_string\n", argv[0]);
		exit(1);
	}
	n = append_text_to_file(argv[1], argv[2]);
	printf("-> printed chars %i\n", n);
	return (0);
}
