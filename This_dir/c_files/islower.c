#include <stdio.h>


int _islower(int c)                       {                                                 char lwr;
	char upr;

	for (lwr = 'a'; lwr <= 'z'; lwr++)        {                                                 for (upr = 'A'; upr <= 'Z'; upr++)
                {
                        if (c == lwr)
                        {
                                return 0;
                        }
                        else if (c == upr)
                        {
                                return 1;
                        }
                }
        }
}

int main()
{
	int r;

	r = _islower(65);
	putchar(r + '0');
	r = _islower(97);
	putchar(r + '0');
	r = _islower('G');
	putchar(r + '0');
	putchar('\n');
	return (0);
}
