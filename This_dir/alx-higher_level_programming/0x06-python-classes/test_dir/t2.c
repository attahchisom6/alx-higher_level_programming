#include <stdio.h>

int _isdigit(char c)
{
	if (c < '0' || c > '9')
		return (0);
	return (1);
}

int main(void)
{
	printf("return value of _digit('c'): %d\n", _isdigit('c'));
	printf("return value of _isdigit('1'): %d\n", _isdigit('1'));

	return (0);
}
