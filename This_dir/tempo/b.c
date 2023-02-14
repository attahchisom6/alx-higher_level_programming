#include "my_shell.h"

/**
 * my_strtok - this function will beak a string into words(tokens)
 * and store each word in an array
 * @str:test string to broken down
 * @delim:parameter to break the string
 *
 * Return:pointer to the tokens
 */

char *my_strtok(char str[], char *delim)
{
	static char *token, *str_end;
	int k, p, flag;
	char *str_start;

	if (str != NULL)
	{
		if (cmp_chars(str, delim) != 0)
			return (NULL);
		token = str;
		p = _strlen(str);
		str_end = &str[p];
	}

	str_start = token;
	if (str_start == str_end)
		return (NULL);

	/*splitting string start here*/
	for (flag = 0, k = 0; token[k] != '\0'; token++)
	{
		/*if token does not cobtain the first chars in str*/
		if (token[k] != str_start[k])
			if (token[k - 1] == '\0' && token[k] != '\0')
				break;

		for (p = 0; delim[p] != '\0'; p++)
		{
			if (token[k] == delim[p])
			{
				token[k] = '\0';
				/*if token contain the first chars in str for every k*/
				/*ignore it break the loop*/
				if (token[k] == str_start[k])
					k++;
				break;
			}
		}
		if (flag == 0 && token[k] != '\0')
			flag = 1;
	}
	
	if (flag == 0)
		return (NULL);
	return (str_start);
}

int main(void)
{
	char s[] = "Hello world";
	char *str;

	str = my_strtok(s, " ");
	while (str != NULL)
	{
		printf("%s\n", str);
		str = my_strtok(NULL, " ");
	}
	return (0);
}
