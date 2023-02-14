#include "sort.h"

/**
 * merge_array - this function will merge sorted sub-arrays of an array
 * @l_idx:left index
 * @r_idx:right index
 * @mid:middle element of the array
 *
 * Return:void
 */

void merge_arrays(int *array, int *buffer, int l_idx, int mid, int r_idx)
{
	int lower_bd, mid_bd, k;

	lower_bd = k = l_idx;
	mid_bd = mid + 1;

	printf("Merging...\n");

	printf("[left]: ");
	print_array(&array[l_idx], mid + 1 - l_idx);

	printf("[right] ");
	print_array(&array[mid + 1], r_idx - mid);
	while (lower_bd <= mid && mid_bd <= r_idx)
	{
		if (array[lower_bd] < array[mid_bd])
		{
			buffer[k] = array[lower_bd];
			lower_bd++;
		}
		else
		{
			buffer[k] = array[mid_bd];
			mid_bd++;
		}
		k++;
	}

	while (lower_bd <= mid)
	{
		buffer[k] = array[lower_bd];
		k++;
		lower_bd++;
	}

	while (mid_bd <= r_idx)
	{
		buffer[k] = array[mid_bd];
		k++;
		mid_bd++;
	}

	for (k = l_idx; k <= r_idx; k++)
		array[k] = buffer[k];
	printf("[Done]: ");
	print_array(&array[l_idx], r_idx + 1 - l_idx);
}

/**
 * merge_recurrsion - recursively call itself to each sub-array of the
 * parent array
 * @array: list of integer elements
 * @l_index: left index
 * @r_index: right index
 *
 * Return:void
 */

void merge_recurrsion(int *array, int *buffer, int l_idx, int r_idx)
{
	int mid = l_idx + (r_idx - l_idx) / 2;

	if (l_idx >= r_idx)
		return;
	if (l_idx < r_idx)
	{
	merge_recurrsion(array, buffer, l_idx, mid);
	merge_recurrsion(array, buffer, mid + 1, r_idx);
	merge_arrays(array, buffer, l_idx, mid, r_idx);
	}
}

/**
 * merge_sort - sorts an array using merge sort algorithm by dividing
 * array into sub-array and working on each array independently
 * @array: list of integers
 * @size: number of elements in the list
 *
 * Return: void
 */

void merge_sort(int *array, size_t size)
{
	int *buffer;

	buffer = malloc(size * sizeof(int));
	if (!buffer)
		return;
	merge_recurrsion(array, buffer, 0, size - 1);

	free(buffer);
}
