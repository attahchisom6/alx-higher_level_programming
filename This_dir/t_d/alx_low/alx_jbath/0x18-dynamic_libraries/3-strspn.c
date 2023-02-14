#include "holberton.h"
/**
 * _strspn - calls function
 * @s: string to be scanned
 * @accept: string containing the characters to match.
 * Description: Function that gets the length of a prefix substring.
 * Return: This function returns the number of characters in the initial
 * segment of s which consist only of characters from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
				break;
		}
		{
			if (!accept[j])
				break;
		}
	}
	return (i);
}
