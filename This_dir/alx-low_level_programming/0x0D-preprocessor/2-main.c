#include <stdio.h>

/**
 * main - programme to print the  source file name
 * the executable file prints the name of the source file
 * it was compiled from
 *
 * Return:0
 */

int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
