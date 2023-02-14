#include <stdio.h>

int main(void)
{
	int n;

	printf("pls enter an integer: ");
	scanf("%d", &n);

	printf("When %d is divided by 10 ...\nputchar function prints: ", n);
	putchar((n / 10 + '0'));
	putchar('\n');
	return (0);
}
