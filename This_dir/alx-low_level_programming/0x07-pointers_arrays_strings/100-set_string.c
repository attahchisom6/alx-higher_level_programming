#include "main.h"
#include <stdio.h>

/**
 * set_string - set the value of a pointer to a string
 * @s:pointer to be set to string
 * @to:pointer to string to be set vy pointer s
 */

void set_string(char **s, char *to)
{
	*s = to;
}
