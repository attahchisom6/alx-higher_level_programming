#include <stdio.h>

int main(void)
{
	int n = 98;
	int *p = &n;


	printf("value of *p++ : %d", *p++);
	return (0);
}
