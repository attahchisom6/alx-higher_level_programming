#include "main.h"
#include <stdio.h>

/**
 * main - function to print name of programme
 * @argc:number of arguments
 * @argv:array of argument
 * Return:0 on successful execution
 */

int main(int argc, char *argv[])
{
	(void) argc; /*ignore argc*/
	printf("%s\n", argv[0]);

	return (0);
}
