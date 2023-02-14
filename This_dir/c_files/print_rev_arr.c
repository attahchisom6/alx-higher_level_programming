#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void print_rev_arr(char *s)
{
	int k, p, m = 0;
	int arr[] = {0};

	p = 0;
	while (s[p] != '\0')
	{
		p++;
	}

	for (k = p - 1; k >= 0; k--)
	{
		arr[m] = arr[m] * 10 + (s[k] - '0');
	}
	printf("%d", arr[m]);
}

int main(void)
{
	print_rev_arr("6543210");
	printf("\n");
	return (0);
}
