#include <stdio.h>

void reverse(char *n)
{
	int i = 0, j = 0;
	char temp;
                                         while (*(n + i) != '\0')         {                                        i++;
        }
        i--;                                                              for (j = 0; j < i; j++, i--)
        {                                        temp = *(n + j);                 *(n + j) = *(n + i);
                *(n + i) = temp;
        }
}

int main(void)
{
	char p[] = "1234";

	reverse(p);
	printf("%s\n", p);
	return (0);
}
