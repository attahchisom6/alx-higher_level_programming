#include <stdio.h>
#define MAXSTRING 80

int  main()
{
	int g;
	char message[] = "_putchar";
	for (g = 0; g < MAXSTRING; g++)
	{
		if (message[g] == '\0')
		{
			putchar('\n');
			break;
		}
		else
	putchar(message[g]);
	}
	return (0);
}
