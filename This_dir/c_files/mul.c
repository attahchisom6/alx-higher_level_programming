#include <stdio.h>

/*"
 * main-function main
 * Return:0
 */

int multable(int num)
{
	int p, q;

	for (p = 0; p < num; p++)
	{
		for (q = 0; q < num; q++)
		{
			printf("%d ", p * q);
		}
		printf("\n");
	}
	return (0);
}

int main(void)
{
	multable(5);
	return (0);
}
