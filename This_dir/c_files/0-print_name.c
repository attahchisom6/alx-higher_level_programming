#include "fpointer.h"
#include <stdio.h>

/**
 * print_name - this function will print my name, when inputed
 * @name:string of name inputed
 * @f:pointer to function f
 *
 * Return:void
 */

void print_name(char *name, void (*f)(char *))
{

	if (f == NULL || name == NULL)
		return;

	if (name != NULL)
	{
		f(name);
	}
}

void print_namee(char *s)
{
	printf("Hello, my name is %s\n", s);
}

void print_uprname(char *s)
{
	int k;
	
	while (s[k] != '\0')
	{
		if (s[k] >= 'a' && s[k] <= 'z')
		{
			putchar(s[k] - 32);
		}
		else
		{
			putchar(s[k]);
		}
		k++;
	}
}

int main(void)
{

	print_name("Bob", print_namee);
	print_name("mr Afam", print_uprname);
	printf("\n");
	return (0);
}
