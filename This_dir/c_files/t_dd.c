#include <stdio.h>

int main(void)
{
	int x, y, z;

	x = 8;
	y = 7;
	z = 9;

	z++;
	x++;
	x = x + y--;
	printf("%d\n", z);
	return (0);
}
