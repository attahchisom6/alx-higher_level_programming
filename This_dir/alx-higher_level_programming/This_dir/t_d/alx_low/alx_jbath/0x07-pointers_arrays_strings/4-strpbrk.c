#include "holberton.h"
/**
 * *_strpbrk - calls function
 * @s: original string
 * @accept: string to compare
 * Description: Function that prints a string,
 * followed by a new line, to stdout.
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;
	int ptr;
	int flag;

	for (i = 0; s[i] != '\0'; i++)
	ptr = i;
	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[i] == s[j])
			{
				if (j <= ptr)
				{
					ptr = j;
					flag = 1;
				}
			}
		}
	}
	if (flag == 1)
	{
		return (&s[ptr]);
	}
	else
	{
		return ('\0');
	}
}
