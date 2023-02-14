#include "sort.h"

/**
 * merge_array - this function will merge sorted sub-arrays of an array
 * @l_idx:left index
 * @r_idx:right index
 * @mid:middle element of the array
 *
 * Return:void
 */

void merge_arrays(int *A, int l_idx, int mid, int r_idx)
{
	int len_l = mid + 1 - l_idx;
	int len_r = r_idx - mid;
	int i, j, k;
	int l_arr[len_l];
	int r_arr[len_r];

	for (i = 0; i < len_l; i++)
		l_arr[i] = A[i + 1];
	for (j = 0; j < len_r; j++)
		r_arr[j] = A[mid + 1 + j];
	i = j = k = 0;
	while (i < len_l && j < len_r)
	{
		printf("merging...\n");
		if (l_arr[i] < r_arr[j])
		{
			A[k] = l_arr[i];
			printf("[left]: %d\n", l_arr[i]);
			i++;
		}
		else
		{
			A[k] = r_arr[j];
			printf("[right]: %d\n", r_arr[j]);
			j++;
		}
		printf("[Done]: ");
		print_array(A, len_l + len_r);
		k++;
	}

	/*Boundary  conditions*/
	 while (j < len_r && i == len_l)
	 {
		 A[k] = r_arr[j];
		 j++;
		 k++;
	 }

	 while (i < len_l && j == len_r)
	 {
		 A[k] = l_arr[i];
		 i++;
		 k++;
	 }
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

void merge_recurrsion(int *array, int l_idx, int r_idx)
{
	int mid = l_idx + (r_idx - l_idx) / 2;

	if (l_idx >= r_idx)
		return;
	merge_recurrsion(array, l_idx, mid);
	merge_recurrsion(array, mid + 1, r_idx);
	merge_arrays(array, l_idx, mid, r_idx);
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
	int l_idx = array[0];
	int r_idx = array[size - 1];

	merge_recurrsion(array, l_idx, r_idx);
}
