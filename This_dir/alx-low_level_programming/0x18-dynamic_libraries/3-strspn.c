#include "main.h"
#include <stdio.h>

/**
 * _strspn - function to obtain the lenght of prefix substring
 * @s:test string to analyze
 * @accept:string containing character to match
 *
 * Return:number of bytes in the initial segement of s
 * which consist only of byte from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int k, p, match = 0;

	p = 0;
	while (s[p] != '\0')
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (s[p] == accept[k])
			{
				match++;
				break;
			}
			if (accept[k + 1] == '\0' && s[p] != accept[k])
				return (match);
		}
		p++;
	}
	return (match);
}
