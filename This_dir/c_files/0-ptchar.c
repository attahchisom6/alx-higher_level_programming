#include <stdio.h>
#include <unistd.h>

int _pullchar(char c)
{
	char ret;

	ret = write(1, &c, 1);

	return ret;
}

int main()
{
	char k = 'G';

	_pullchar(k);
	_pullchar('\n');
	return (0);
}
