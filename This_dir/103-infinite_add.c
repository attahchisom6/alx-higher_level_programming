#include <stdio.h>

void reverse_array(char *n)
{
	int k, p;
	char temp;

	p = 0;
	while (n[p] != '\0')
	{
		p++;
	}
	p--;
	for (k = 0; k < p; k++, p--)
	{
		temp = n[p];
		n[p] = n[k];
		n[k] = temp;
	}
}

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int p = 0;
	int k = 0;
	int value1 = 0;
	int value2 = 0;
	int digits = 0;
	int sum_total = 0;
	int carry_over = 0;

	while (n1[p] != '\0')
		p++;
	while (n2[k] != '\0')
		k++;

	if (p >= size_r || k >= size_r)
		return (0);
	while (p >= 0 || k >= 0 || carry_over == 1)
	{
		if (p < 0)
			return (0);
		else
			value1 = n1[p] - '0';
		if (k < 0)
			return (0);
		else
			value2 = n2[k] - '0';
		sum_total = value1 + value2 + carry_over;
		if (sum_total >= 10)
			carry_over = 1;
		else
			carry_over = 0;
		if (digits >= size_r - 1)
			return (0);
		r[digits] = (sum_total % 10) + '0';
		digits++;
		p--;
		k--;
	}
	
	if (digits == size_r)
		return (0);
	r[digits] = '\0';
	reverse_array(r);
	return (r);
}

int main(void)
{
	char *m = "1668778";
	char *n = "1246479";
	char r[100];
	char *result;

	result = infinite_add(m, n, r, 100);
	if (result == 0)
	{
		printf("Error\n");
	}
	else
	{
		printf("%s + %s = %s\n", m, n, result);
	}

	return (0);
}
