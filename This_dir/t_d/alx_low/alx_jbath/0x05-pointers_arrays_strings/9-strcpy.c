#include "holberton.h"
/**
  * *_strcpy - calls function
  * @dest: destination string
  * @src: source string
  * Description: Function that copies the string pointed to by src,
  * including the terminating null byte (\0),
  * to the buffewr pointed to by dest.
  * Return: pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	int index;

	for (index = 0; src[index] != '\0'; index++)
		dest[index] = src[index];
	dest[index] = '\0';
	return (dest);
}
