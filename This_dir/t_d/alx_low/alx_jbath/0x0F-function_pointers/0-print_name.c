#include "function_pointers.h"
/**
 * print_name - calls function
 * @name: name passed by main
 * @f: function pointer
 * Description: Function that prints a name
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	(*f)(name);
}
