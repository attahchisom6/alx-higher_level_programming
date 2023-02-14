#include "main.h"
#include <errno.h>

ssize_t _fread(void *buffer, size_t size, FILE *file)
{
	ssize_t bytes = 0;
	char *val;
	ssize_t fd = 0;

	val = buffer;
	while (size != 0)
	{
		fd = read(fileno(file), val, size);
		if (fd < 0)
			return (1);


		size = size - fd;
		bytes = bytes + fd;
		val = val + fd;
	}
	return (bytes);
}

/**
 * _fgetc - function to read a char once at a time
 * @FILE:pointer to file atream
 *
 * Return:The read characters or -1 on failure
 */

int _fgetc(FILE *file)
{
	unsigned char ch;
	ssize_t fd = 0;

	fd = _fread(&ch, 1, file);
	if (fd < 0)
		return (-1);
	return ((ssize_t)ch);
}
/**
 * get_line - function to get the number of bytes or char in a buffer up to a newline
 * @buffer:pointer to memory containing bytes of strings
 * @size:number of chars to get from buffer
 * stream:input space to recieve the bytes to be gotten from buffer
 *
 * Return:number of byes gotten from buffer
 */

ssize_t _get_line(char *buffer, size_t size, FILE *stream)
{
	ssize_t k;
	int c;

	if (size == 0)
		return (-1);
	k = 0;
	while (k < (size - 1) && c != '\n')
	{
		c =  _fgetc(stream);

		if (k == 0 && c == EOF)
		{
			return (-1);
			break;
		}
		buffer[k] = (char)c;
		k++;
	}
	buffer[k] = '\0';
	return (k);
}
