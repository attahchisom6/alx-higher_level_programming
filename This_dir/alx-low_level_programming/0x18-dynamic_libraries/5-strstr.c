#include "main.h"
#include <stdio.h>

/**
 * _strstr - A function to locate a substring
 * @heystack:string to be searched
 * @needle:substring to be sought in heystack
 *
 * Return:pointer to begining of the located substring
 * or NULL if the substring is not found
 */

char *_strstr(char *heystack, char *needle)
{
	int k, p;

	p = 0;
	while (heystack[p] != '\0')
	{
		for (k = 0; needle[k] != '\0'; k++)
		{
			if (heystack[p + k] != needle[k])
				break;
		}
		if (!needle[k])
			return (&heystack[p]);
		p++;
	}
	return (NULL);
}
