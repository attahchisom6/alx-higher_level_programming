#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * This will contain many system function definintions
 */

int _putchar(char c)
{
	char ret;

	ret = write(1, &c, 1);
	return (ret);
}

#endif
