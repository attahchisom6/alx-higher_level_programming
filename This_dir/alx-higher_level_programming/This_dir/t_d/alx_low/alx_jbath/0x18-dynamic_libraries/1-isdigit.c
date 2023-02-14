#include "holberton.h"

/**
 * _isdigit - call function
 * @c: character to check if digit
 * Description: Function that checks for
 * a digit (0 through 9).
 * Return: 1 if digit otherwise 0
 */
int _isdigit(int c)
{
	if ((c >= 0 && c <= 47) || (c >= 58 && c <= 255))
		return (0);
	else
		return (1);
}

