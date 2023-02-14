#include <stdio.h>

/**
 * _strspn - function to get the lenght of a prefixed substring
 * of a string
 * @s:superstring of the substring
 * @accept:string containing bytes to match with s
 * @n:integer parameter to get length of substring
 *
 * Return:number of bytes in the initial subatring of s which contain
 * only bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int p, k;
	unsigned int match = 0;

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
			if (accept[k + 1] == '\0')
				return (match);

		}
		p++;
	}
	return (match);
}

int main(void)
{
	char *str = "hello, world";
	char *acc = "oleh";
	unsigned n;

	n = _strspn(str, acc);
	printf("%u\n", n);
	return (0);
}
