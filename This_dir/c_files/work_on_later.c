#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - this function will print all forms of data types
 * passed to it
 * @format:point to all form of data types
 *
 * Return:void
 */

void print_all(const char * const format, ...)
{
	int k, p;
	const char buffer[] = "cifs";
	char *str;

	va_list all;

	va_start(all, format);
	p = 0;
	while (format != NULL && format[p] != '\0')
	{
		k = 0;
		while (buffer[k] != '\0')
		{
			if (format[p] == buffer[k])
			{
				printf(", ");
				break;
			}
			k++;
		}

		switch (format[p])
		{
		case 'f':
			printf("%f", va_arg(all, double)); /*promote float to double*/
			break;

		case 'i':
			printf("%d", va_arg(all, int));
			break;

		case 's':
			str = va_arg(all, char *);
			if (str == NULL)
			{
				printf("(nill");
				break;
			}
			printf("%s", str);
			break;

			case 'c':
			printf("%c", va_arg(all, int)); /*promoting char to int*/
		/* since char is necessarily an int of a unit byte*/
			break;
		}
		p++;
	}
	printf("\n");
	va_end(all);

}

int main(void)
{
    print_all("ceis", 'B', 3, "stSchool");
    return (0);
}
