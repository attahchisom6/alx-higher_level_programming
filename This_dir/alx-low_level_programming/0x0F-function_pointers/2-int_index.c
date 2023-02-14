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

	if (array != NULL && cmp != NULL)
	{

		if (size <= 0)
			return (-1);

		for (k = 0; k < size; k++)
		{
			if (cmp(array[k]) > 0)
				return (k);
		}
	}
	return (-1);
}
