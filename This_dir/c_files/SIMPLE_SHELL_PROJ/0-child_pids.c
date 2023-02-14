#include <stdio.h>
#include <unistd.h>

int main(void)
{
	pid_t k;

	k = getpid();
	printf("pid and child pid's are %u\n", k);
	return (0);
}
