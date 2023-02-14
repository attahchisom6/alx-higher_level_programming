#include <stdio.h>

/**
 * _strpbrk - function to locate bytes that mathes
 * a desired byte from another string
 * @s:test string to search from
 * @accept:string containing bytes to match with s
 * Return:pointer to byte if it match one of the byte
 * in accept otherwise return NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int k, p;

	p = 0;
	while (s[p] != '\0')
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (s[p] == accept[k])
				return (&s[p]);
			
		}
		p++;
	}
	return (NULL);
}

int main(void)
{
	char *s = "hello, world";
	char *acc = "world";
	char *r;

	printf("%s\n", s);
	r = _strpbrk(s, acc);
	printf("%s\n", r);
	return (0);
}
