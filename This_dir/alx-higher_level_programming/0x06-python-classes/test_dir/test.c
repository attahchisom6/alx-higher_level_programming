#include <stdio.h>
#include <ctype.h>

int len_str(char *s)
{
	unsigned int k = 0;

	while (s[k] != '\0')
	{
		if (s[k] < '0' || s[k] > '9')
			return (-1);
		k++;
	}
	return (k);
}

/*int _isdigit(char s[])
{
	int k = 0;

	while (s[k] >= '0' && s[k] <= '9')
	{
		if (s[k] == 'e')
			return (-1);
		k++;
	}
	return (0);
}*/

int main(void)
{
	char str[] = "hello";

	printf("len of 1 million: %d\n", len_str("1000000"));
	printf("len of 123e: %d\n", len_str("1234e"));
	/*printf("%d\n", _isdigit(str));
*/
	printf("len of %s: %d\n", str, len_str("hello"));
	return (0);
}
