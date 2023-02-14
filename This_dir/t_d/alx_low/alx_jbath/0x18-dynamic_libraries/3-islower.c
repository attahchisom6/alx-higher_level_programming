#include "holberton.h"
/**
 * _islower - calls function
 * @c: character to check
 * Description: Checks to see if variable
 * is lowercase.
 * Return: 1 if lowercase otherwise 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	return (1);
	else
	return (0);
}
