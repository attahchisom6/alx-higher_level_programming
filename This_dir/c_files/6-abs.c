#include <stdio.h>

/**
 * int _abs-function to print the absolute value
 * Return:int data type
 */

int _abs(int n)
{

	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-n);
	}
	return (n);
}

int main(void)
{
	int k;

	k = _abs(-10);
	printf("%d\n", k);

	k = _abs(0);
	printf("%d\n", k);

	k = _abs(15);
	printf("%d\n", k);
	return (0);
}
