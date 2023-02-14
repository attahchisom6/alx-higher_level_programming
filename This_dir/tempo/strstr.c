#include <stdio.h>
#include <stdlib.h>

/**
 * _strstr - This will be a function to locate a substring
 * i  a string
 * @st:mainvstring
 * sbstr:substring
 *
 * Return: pointer to substring if it exist in string
 */

char *_strstr(char *str, char *sbstr)
{
	int k, p = 0;

	while (str[p] != '\0')
	{
		for (k = 0; str[k] != '\0'; k++)
		{
			if (str[p + k] != sbstr[k])
				break;
		}

		if (sbstr[k] == '\0')
			return (&str[p]);
		p++;
	}
	return (NULL);
}

int main(void)
{
	char *str;

	str = _strstr("hellop", "he");
	printf("%s", str);
	putchar('\n');
	return (0);
}
