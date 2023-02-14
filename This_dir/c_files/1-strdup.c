#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - This function will duplicate the string parameter
 * passed to it
 * @str:string to be duplicated
 *
 * Return:pointer to new created memory for duplicate string
 */

char *_strdup(char *str)
{
	int k, m, p;
	char *strc; /*new to be copied from str*/

	if (str == NULL)
	{
		return (NULL);
	}
	p = 0;
	while (str[p] != '\0')
	{
		p++;
	}

	k = p + 1; /*total length of str including null terminator*/
	strc = malloc(k * sizeof(char));
	for (m = 0; m < k; m++)
	{
		strc[m] = str[m];
	}
	free(strc);
	return (strc);
}
int main(void)
{
	char *s = NULL;
	char *ptr;

	ptr = _strdup(s);
	if (ptr == NULL)
	{
		printf("No memory space to allocaste to pointer s\n");
		return (1);
	}
	printf("%s\n", ptr);
	free(ptr);
	return (0);
}
