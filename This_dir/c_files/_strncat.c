#include <stdio.h>

/**
 * program to concertenate a number of to a desired string
 * @dest:dest string recieving the string
 * @src:source string to be concertenated from
 * Return:dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int k, p;

	p = 0;
	while (dest[p] != '\0')
	{
		p++;
	}
	
	k = 0;
	while (src[k] != '\0' && k < n)
	{
		dest[p] = src[k];
		p++;
		k++;
	}
	dest[p] = '\0';
	return (dest);
}

int main(void)
{
	char str1[50];
	char str2[50];
	int n;
	char *ptr;

	printf("Enter destination string: ");
	scanf("%s", str1);
	printf("Enter source string to be concertenated from: ");
	scanf("%s", str2);
	printf("Enter number of string to be concertenated: ");
	scanf("%d", &n);

	ptr = _strncat(str1, str2, n);
	printf("%s\n", ptr);
	return (0);
}
