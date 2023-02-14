#include "my_shell.h"

/**
 * get_len - this function will get the length of number of digits
 * that made up a number
 * @n:test number
 *
 * Return:length of number
 */

int get_len(int n)
{
	unsigned int n1;
	int length = 1;

	if (n < 0)
	{
		n1 = n * -1;
		length++;
	}
	else
	{
		n1 = n;
	}
	while (n1 > 9)
	{
		n1 = n1 / 10;
		length++;
	}
	return (length);
}

/**
 * itoa - A function that converts a nuber to string
 * @n:number to be converted
 *
 * Return:string consisting of digits
 */

char *_itoa(int n)
{
	char *buffer;
	int len = get_len(n);
	size_t n1;

	buffer = malloc((len + 1) * sizeof(char));
	if (buffer == NULL)
		return (NULL);

	buffer[len] = '\0';
	if (n < 0)
	{
		n1 = n * -1;
		buffer[0] = '-';
	}
	else
	{
		n1 = n;
	}

	len--;
	while (n1 > 0)
	{
		buffer[len] = (n1 % 10) + '0';
		n1 = n1 / 10;

		len--;
	}

	return (buffer);
}

/**
 * _atoi - A function that converts string to nunvers
 * @str:string to be converted
 *
 * Return:the converted string to decimal equivalent
 */

int _atoi(char *str)
{
	size_t value  = 0, p = 0;
	int output, sign = 1, flag;
	while (str[p] != '\0' && flag != 3)
	{
		if (str[p] == '-')
			sign = sign * -1;
		if (str[p] >= '0' && str[p] <= '9')
		{
			flag = 1;

			value = value * 10 + (str[p] - '0');
		}
		
		else if (flag == 1)
			flag = 3;
		p++;
	}

	if (sign == -1)
		output = -value;
	else
		output = value;
	
	return (output);
}
