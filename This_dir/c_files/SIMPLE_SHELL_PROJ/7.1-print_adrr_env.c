#include "main.h"

/**
 * main - print address of env and environ
 *
 * Return:0 on success
 */

extern char **environ;

int main(int ac, char **av, char **env)
{
	size_t k;

	(void)ac;
	(void)av;

	printf("address of env: %p\n", env);
	printf("address of environ: %p\n", environ);
	return (0);
}
