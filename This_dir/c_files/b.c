#include <stdio.h>
#include <stdlib.h>

extern char **environ;
char *match_env(char *s)
{
	int k, x;

	for (x = 0; environ[x]; x++)
	{
		k = 0;
		while (environ[x][k] != '=')
		{
			if (s[k] == environ[x][k])
				return (&environ[x][k]);
			k++;
		}

		printf("%s\n", "hello world");
	}
	return (NULL);
}

int main(void)
{
	char *d;

	d = match_env("L");
	printf("%s\n", d);
	return (0);
}
