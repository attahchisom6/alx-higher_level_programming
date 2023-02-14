#include <stdio.h>

/*"
 * main-function main
 * Return:0
 */

int rectt(int num)
{
	int p, q;

	for (p = 0; p < num; p++)
	{
		for (q = 0; q < num; q++)
		{
			printf("%dq ", q);
		}
		printf("\n");
		printf("%dp ", p);
	}
	printf("\n");
	return (0);
}

int main(void)
{
	rectt(5);
	return (0);
}
