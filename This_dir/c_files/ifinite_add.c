#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int print_rev_arr(char *s1, char *s2)
{
	int p = 0, k, m = 0, q = 0;
	int arr1[] = {0};
	int arr2[] = {0};
	int sum = 0, val = 0, carry_over = 0;

	while (s1[p] != '\0')
		p++;
	while (s2[q] != '\0')
		q++;

	for (k = 0; k < p; k++)
		arr1[m] = arr1[m] * 10 + (s1[k] - '0');
	for (k = 0; k < q; k++)
		arr2[m] = arr2[m] * 10 + (s2[k] - '0');
	val = arr2[m] + arr1[m] + carry_over;
	if (val > 9)
	{
		sum = val;
		sum = val % 10;
		carry_over = 1;
	}
	sum = val;
	carry_over = 0;

	return (sum);
}

int main(void)
{
	int r;

	r = print_rev_arr("127", "1027");
	printf("%d", r);
	printf("\n");
	return (0);
}
