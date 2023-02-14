#include "main.h"

int main(void)
{
	int input;

	while (input != 0)
	{
		input = isatty(STDIN_FILENO);
		if (input == 1)
			write(STDOUT_FILENO, "#cisfun$ ", 13);
		exit(0);
	}
	return (0);
}
