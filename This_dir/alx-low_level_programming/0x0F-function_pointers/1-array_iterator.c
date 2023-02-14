#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - this funcrion exexutes a funcrion passed
 * as a parameter to each element of its array
 * @array:collection of elements of type int
 * @size:size of the array
 * @action:pointer to the function paased
 *
 * Return:void
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int p;

	if (array == NULL || action == NULL)
		return;

	for (p = 0; p < size; p++)
		action(array[p]);
}
