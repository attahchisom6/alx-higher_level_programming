#include "main.h"
#include <stdio.h>

/**
 * reverse_string - reverse array
 * @n:integer parameter
 * Return:0
 */

void reverse_string(char *n)
{
	int i = 0;
	int j = 0;
	char temp;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;

	for (j = 0; j < i; j++, i--)
	{
		temp = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = temp;
	}
}

/**
 * infinite_add - add two numbers stored in a string
 * @n1:pointer to string containing first number
 * @n2:pointer to string containing the second number
 * @r:pointer to buffer
 * @size_r:size of buffer
 * Return:pointer to calling function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0, i = 0, j = 0, digits = 0, temp_total = 0;
	int value1 = 0, value2 = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (i >= size_r || j >= size_r)
		return (0);
	while (i >= 0 || j >= 0 || overflow == 1)
	{
		if (i < 0)
			value1 = 0;
		else
			value1 = *(n1 + i) - '0';
		if (j < 0)
			value2 = 0;
		else
			value2 = *(n2 + j) - '0';
		temp_total = value1 + value2 + overflow;
		if (temp_total >= 10)
			overflow = 1;
		else
			overflow = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (temp_total % 10) + '0';
		digits++;
		i--;
		j--;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	reverse_string(r);
	return (r);
}
