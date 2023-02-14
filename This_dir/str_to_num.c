#include <stdio.h>

/**
 * string to num
 */

int main(void)
{
	char *s = "123";
	int num = 0, k;

	for (k = 0; s[k] != '\0'; k++)
		num = num * 10 + s[k] - '\0';
	printf("string value is %s\nwhile its corresponding numeral value is %d\n", s, num);

	return 0;
}
