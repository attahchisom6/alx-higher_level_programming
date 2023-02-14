#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - this funcrion exexutes a funcrion passed
 * as a parameter to each element of its array
 * @arrray:of element
 * @size_t:size of the array
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

void _elem(int elements)
{
	printf("%d\n", elements);
}
void _elem_hexa(int elements)
{
	printf("0x%x\n", elements);
}
int main(void)
{
	int array[] = {0, 98, 402, 1024, 4096};

	array_iterator(array, 5, &_elem);
	array_iterator(array, 5, &_elem_hexa);
	return (0);
}
