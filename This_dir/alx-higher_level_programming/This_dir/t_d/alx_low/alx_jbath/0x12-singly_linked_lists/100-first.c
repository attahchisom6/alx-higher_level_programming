#include <stdio.h>

/**
 * myStartupFun - Function that prints before the main function is executed
 * Return: 0
 */
void myStartupFun(void) __attribute__ ((constructor));
void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
