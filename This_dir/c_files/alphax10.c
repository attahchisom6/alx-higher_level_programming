#include <stdio.h>

/**
*print_alphabet_x10: prints the alphabets 10x
*Return:0
*/
                                          int main()
{
        int k;
        char lwr;

        for (k = 1; k <= 10; k++)
        {
                for (lwr = 'a'; lwr <= 'z'; lwr++)
		{
                        putchar(lwr);
			
                }
		putchar('\n');
        }
	
	return (0);
}
