#include "main.h"

/**
 * main - function to print each directory contained in a path
 *
 * Return:0 on  success
 */

int main(void)
{
	char *str;
	char *arr;

	str = _getenv("PATH");

	arr = my_strtok(str, ":");
	while (arr != NULL)
	{
		printf("%s\n", arr);
		arr = my_strtok(NULL, ":");
	}
	exit(0);
}
