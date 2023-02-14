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

int main(int ac, char **av)
{
    ssize_t n;

    if (ac != 2)
    {
        dprintf(2, "Usage: %s filename\n", av[0]);
        exit(1);
    }
    n = read_textfile(av[1], 114);
    printf("\n(printed chars: %zi)\n", n);
    n = read_textfile(av[1], 1024);
    printf("\n(printed chars: %zi)\n", n);
    return (0);
}
