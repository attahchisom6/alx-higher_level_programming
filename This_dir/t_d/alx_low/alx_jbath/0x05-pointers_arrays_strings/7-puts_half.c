#include "holberton.h"
/**
 * puts_half - calls function
 * @str: string to print
 * Description: Function should print the second half of the string
 * If the number of characters is odd, the function should print the
 * last n characters of the string, where n = (length_of_the_string - 1) / 2
 * Return: 0
 */

void puts_half(char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		count++;
		str++;
	}
	if (count % 2 == 0)
		count = count / 2;
	else
		count = ((count - 1) / 2);
		str = str - count;
	for (; *str != '\0'; str++)
		_putchar (*str);
	_putchar ('\n');
}
