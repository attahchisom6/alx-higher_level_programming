#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -dunction main
 * Return:0
 * Description: This program will print a random number, every rime it is run
 */

int main()
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is a positive number\n", n);
	}
	else if (n < 0)
	{
		printf("%d is a negative number\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	printf("And it's last digit is %d", n % 10);
	printf("\n");
	return 0;
}
