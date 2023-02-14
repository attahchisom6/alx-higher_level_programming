#include "holberton.h"
/**
 * _isupper - calls function
 * @c: character to check
 * Description: Checks to see if variable
 * is uppercase.
 * Return: 1 if uppercase otherwise 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
