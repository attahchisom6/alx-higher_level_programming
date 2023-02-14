
#include "holberton.h"
#include <limits.h>

/**
 * _atoi - Calls Function
 * @s: input string
 * Description: Function that converts a string to an integer
 * Return: integer
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sign = -sign;
		if (s[i] >= '0' && s[i] <= '9')
			break;
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
			result = result * 10 + s[i] - '0';
		if (result > 0 && (s[i] < '0' || s[i] > '9'))
			break;
	}
	if (result > INT_MAX / 10 || (result == INT_MAX / 10 && s[i] - '0' > 7))
	{
		if (sign == 1)
			result = INT_MAX;
		else
			result = INT_MIN;
	}
	return (sign * result);
}
