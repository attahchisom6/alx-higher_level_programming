#include <stdio.h>

/*"
 * main-function main
 * Return:0
 */

int rectt(int num1, int num2)
{
	int p, q;

	for (p = 0; p < num1; p++)
	{
		for (q = 0; q < num2; q++)
		{
			printf("%dq%dp ", q, p);
		}
		printf("\n");
		
	}
	printf("\n");
	return (0);
}

int main(void)
{
	rectt(5, 7);
	return (0);
}
