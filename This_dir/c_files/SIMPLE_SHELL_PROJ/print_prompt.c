#include <stdio.h>
#include <stdlib.h>

int main(int c, char **argv)
{
	int k;

	for (k = 1; argv[k] != NULL; k++)
	{
		if (k == 1)
		{
			printf("%s", argv[1]);
		}
		else
		{
			putchar(' ');
			printf("%s", argv[k]);
		}
	}
	putchar('\n');
	return (0);
}
