#include "holberton.h"
/**
 * *_strchr - calls function
 * @s: string to print
 * @c: second string
 * Description: Write a function that locates a character in a string.
 * Return: Returns a pointer to the first occurrence
 * of the character c in the string s, or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	for (; ; s++)
	{
		if (*s == c)
			return (s);
		if (!*s)
			return ('\0');
	}
	return (s);
}
