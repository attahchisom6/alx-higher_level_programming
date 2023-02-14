#include "variadic_functions.h"
/**
 * op_char - calls function
 * @printAll: parser
 * Return: 0
 */
void op_char(va_list printAll)
{
	printf("%c", va_arg(printAll, int));
}
/**
 * op_int - calls function
 * @printAll: parser
 * Return: 0
 */
void op_int(va_list printAll)
{
	printf("%d", va_arg(printAll, int));
}
/**
 * op_float - calls function
 * @printAll: parser
 * Return: 0
 */
void op_float(va_list printAll)
{
	printf("%f", va_arg(printAll, double));
}
/**
 * op_char_ptr - calls function
 * @printAll: parser
 * Return: 0
 */
void op_char_ptr(va_list printAll)
{
	printf("%s", va_arg(printAll, char *));
}
/**
 * print_all - calls function
 * @format: list of types of arguments passed to the function
 * Description: Function that prints anything
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	int i;
	int j;

	ops f_ops[] = {
		{"c", op_char},
		{"i", op_int},
		{"f", op_float},
		{"s", op_char_ptr},
	};

	va_list printAll;

	va_start(printAll, format);

	i = 0;

	while (format[i] && format)
	{
		j = 0;

		while (j < 4)
		{
			if (format[i] == *f_ops[j].ic && j != 3)
			{
				f_ops[j].ch(printAll);
				printf(", ");
				break;
			}

			if (format[i] == *f_ops[j].ic)
			{
				f_ops[j].ch(printAll);
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(printAll);
}

