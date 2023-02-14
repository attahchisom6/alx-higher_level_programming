#include "sort.h"

/**
 * bubble_sort - A function to sort a list/array in ascending order
 * using bubble sort algorrithms
 * @array:list of integer elements
 * @size of the array
 *
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	size_t k, p;
	int temp, flag = 1;

	if (array == NULL)
		return;

	for (p = size; p > 0; p--)
	{
		flag = 0;
		for (k = 0; k + 1 < size; k++)
		{
			if (array[k] > array[k + 1])
			{
				temp = array[k];
				array[k] = array[k + 1];
				array[k + 1] = temp;
				print_array(array, size);
				flag = 1;
			}
		}
	}
}
