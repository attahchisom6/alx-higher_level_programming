#include "holberton.h"
/**
 * _strlen - calls function
 * @s: variable
 * Description: Function that returns the length of a string.
 *
 * Return: 0
 */

int _strlen(char *s)
{
	int a;

	for (a = 0; *s != '\0'; s++)
		a++;
	return (a);
}
