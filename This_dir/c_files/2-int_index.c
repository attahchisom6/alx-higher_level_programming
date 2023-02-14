#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - funtion to search for ab integer
 * @array:array of elements containing number to be searched
 * @size:number of elements of the  array
 * @cmp:pointer to the function to be used to compare values
 *
 * Return:index of first element for which cmp does not return 0
 * -1 if no matching element is found or size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int k;

	if (size <= 0)
		return (-1);

	for (k = 0; k < size; k++)
	{
		if (cmp(array[k]) > 0)
			return (k);
	}
	return (-1);
}

int is_98(int elem)
{
	return (elem == -1000);
}

int _abs(int elem)
{
	return (elem == 98 || -elem == 98);
}

int is_strictly_positive(int elem)
{
	return (elem > 0);
}

int main(void)
{
	int array[] = {0, -98, 98, 402, 1024, 4096, -1024, -98, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 98};
	int index;

	index = int_index(array, 20, is_98);
	printf("%d\n", index);
	index = int_index(array, 20, _abs);
	printf("%d\n", index);
	index = int_index(array, 20, is_strictly_positive);
	printf("%d\n", index);
	return (0);
}
