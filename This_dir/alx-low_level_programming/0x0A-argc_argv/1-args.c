#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed to it
 * @argc:Number of arguments
 * @argv:array of arguments
 * Return:0 on succsess
 */

int main(int argc, char *argv[])
{
	(void) argv; /*ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
