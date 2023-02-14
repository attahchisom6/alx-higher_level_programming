#include "main.h"

/**
 * create_file - function to craete a file, if doesnt exist and add
 * content to it
 * @filename:name of file to be created
 * @text_content:strings to be written to file
 *
 * Return:1 on success, -1 on faliure
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t fd = 0, k = 0, p = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	while (text_content[p] != '\0')
		p++;
	k = write(fd, text_content, p);
	if (k < 0)
		return (-1);

	close(fd);
	return (1);
}
