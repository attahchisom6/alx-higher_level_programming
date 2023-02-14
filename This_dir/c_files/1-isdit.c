#include <stdio.h>

int _isdigit(int c)
{
	return (c >= 'A' &&  c <= 'Z');
}

int mul(int m, int n)
{
	int product;

	product = m * n;
	return (product);
}

void print_numbers(void)
{
	char num;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
	}
	putchar('\n');
}

void more_numbers(void)
{
	int p;
	int k;
	char num;

	for (p = 1; p <= 10; p++)
	{
		if (num >= 48 && num <= 57)
		{
			putchar(num);
			if (k >= 10 && k <= 14)
			{
				putchar((num / 10) + '0');
				putchar((num % 10) + '0');
			}
		}
	}
}

int main()
{
	int c;

	c = 'A';
	printf("%c: %d\n",  c, _isdigit(c));
	c = 'a';
	printf("%c: %d\n", c, _isdigit(c));
	printf("%d\n", mul(4, 5));
	printf("%d\n", mul(-7, 7));
	print_numbers();
	more_numbers();
	return (0);
}
