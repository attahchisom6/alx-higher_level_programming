#include "3-calc.h"

/**
 * *get_op_func - calls function
 *
 * @s: string
 * Description: Function that selects the correct function to perform
 * the operation asked by the user.
 * Return: 0
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while
	{
	if (strcmp(ops[i].op, s) == 0)
		return (ops[i].f);
	i++;
	}
	return (NULL);
}
