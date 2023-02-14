#include "holberton.h"

/**
 * read_textfile - Write a function that reads a text file
 * and prints it to the POSIX standard output
 * @filename: file to be read
 * @letters: number of letters it should read and print
 * Return: number of letters it prints and reads, 0 if file cannot be read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, wr, count;
	char *buf;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(letters * sizeof(char));

	if (buf == NULL)
	{
		return (0);
		close(fd);
	}
	count = read(fd, buf, letters);
	wr = write(STDOUT_FILENO, buf, count);

	if (count == -1)
		return (0);

	close(fd);
	return (wr);
}
