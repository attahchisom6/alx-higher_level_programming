#include <stdio.h>

float _strlen(char *s)
{
	float len;

	if (*s != '\0')
	{
		len = 1 + _strlen(s + 1);
		return (len);
	}
	return (0);
}

int main(void)
{
	float f;

	f = _strlen("hello");
	printf("%f\n", f);
	return (0);
}
