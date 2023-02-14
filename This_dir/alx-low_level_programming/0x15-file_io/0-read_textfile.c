#include "main.h"

/**
 * read_textfile - function to read text file and print to posix stdout
 * @filename:file to be raed from
 * @letters:letters to be printed from filename
 *
 * Return:chars to stdout and their total number
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd = 0, k = 0, p = 0; /*where fd is field descriptor*/
	char *buffer;

	if (filename == NULL || letters == 0)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
		return (0);
	p = read(fd, buffer, letters);
	k = write(STDOUT_FILENO, buffer, p);
	if (k < 0)
		return (0);

	close(fd);
	free(buffer);
	return (k);
}
