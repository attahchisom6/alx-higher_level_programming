#include "main.h"

/**
 * split_str - funxtion to split a string into words
 * @str:str to split into words
 *
 * Return: array with each splitted word as elemwnt
 */

char *split_string(char *str)
{
	int k, m = 0, p = 0;
	char word_specifier[] = {'\n', ' ', '\t', '\r', '\0'};
	static char *string = NULL;
	char *word;

	if (str != NULL)
		string = str;
	if (string == NULL)
		return (NULL);

	while (str[m] != '\0')
		m++;
	word = malloc((m + 1) * sizeof(char));
	for (k = 0; k < 5; k++)
	{
		for(p = 0; string[p] != '\0'; p++)
		{
		if (string[p] != word_specifier[k])
		{
			word[p] = string[p];
		}	
		else
		{
			word[p] = '\0';
			string = string + p + 1;
			return (word);
		}
		}
	word[p] = '\0';
	string = NULL;
	}
	free(word);
	return (word);
}

int main(void)
{
	char str[100] = "hello world good";
	char *arr[100];
	int k = 0;

	arr[k] = split_string(str);
	printf("%s\n", arr[k]);
	while (arr[k] != NULL)
	{
		arr[k] = split_string(NULL);
		printf("%s\n", arr[k]);
	};
	return (0);
}
