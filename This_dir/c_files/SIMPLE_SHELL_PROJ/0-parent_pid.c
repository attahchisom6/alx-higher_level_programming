#include <stdio.h>
#include <unistd.h>

int main(void)
{
	pid_t k;

	k = getppid();
	printf("the parent pid of the child pid are %u\n", k);
	return (0);
}
