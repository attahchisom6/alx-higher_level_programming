#include "main.h"


int main(int ac, char **av)
{
	size_t len = 0;
	char *line = NULL;
	FILE *fd;
	ssize_t nread;
	long long int div, num, k, res, flag = 1, L = 1;

	if (ac != 2)
	{
		dprintf(2, "USAGE: %s <file>\n", av[0]);
		exit(EXIT_SUCCESS);
	}

	fd = fopen(av[1], "r");
	if (fd == NULL)
	{
		dprintf(2, "E: %s can't be opened\n", av[1]);
		exit(EXIT_SUCCESS);
	}

	nread = getline(&line, &len, fd);
	while (nread != -1)
	{
		div = 2;
		num = atoll(strtok(line, "\n"));
		flag = 1;

		while (flag == 1)
		{
			res = num % div;
			if (res == 0)
			{
				k = num / div;
				printf("line %lld: %lld = %lld * %lld\n", L, num, div, k);
				flag = 0;
			}
			div++;
			/*num = atoll(strtok(NULL, " \n"));*/
		}
		nread = getline(&line, &len, fd);
		L++;
	}

	free(line);
	fclose(fd);
	exit(EXIT_SUCCESS);
}
