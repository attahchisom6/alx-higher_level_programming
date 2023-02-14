#include "sort.h"

/**
 * _swap: swaps two elements of an array
 * @a:first element
 * @b:secobd element
 *
 * Return: void
 */

void _swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * lomuto_partition - this method will recursively break an array into
 * subarrays by using the last element of the array as a pivot
 * @array: array of integer elements
 * @first:first element of the array
 * @last:last element of the array
 * @size:total number of elements in the array
 *
 * Return: void
 */

void lomuto_partition(int *array, int first, int last, size_t size)
{
	int k, next_idx, pivot, *s;

	s = array;
	if (first < last)
	{
		next_idx = first;
		pivot = last;

		for (k = first; k < last; k++)
		{
			if (s[k] < s[pivot])
			{
				if (next_idx < k)
				{
					_swap(&s[next_idx], &s[k]);
					print_array(s, size);
				}
				next_idx++;
			}
		}
		if (next_idx < pivot && s[next_idx] > s[pivot])
		{
			_swap(&s[next_idx], &s[pivot]);
			print_array(s, size);
		}
		lomuto_partition(s, first, next_idx - 1, size);
		lomuto_partition(s, next_idx + 1, last, size);
	}
}

/**
 * quick_sort - a quick sorting function to sort an array using lomuto
 * method
 * @array:array of integer elements
 * @size:size of the array
 *
 * Return: void
 */

void quick_sort(int *array, size_t size)
{
	lomuto_partition(array, 0, size - 1, size);
}
