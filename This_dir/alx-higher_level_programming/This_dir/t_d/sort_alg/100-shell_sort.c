#include "sort.h"

/**
 * shell_sort - a fuction to sort an array whose elements are
 * far apart from each other using knuth sequence
 * @array:an array of integers
 * @size: size of the array
 *
 * Return:void
 */

void shell_sort(int *array, size_t size)
{
	size_t k, p;
	int temp, isfar;

	if (!array)
		return;

	/*defining knuth sequence*/
	isfar = 1;
	while (isfar < size / 3)
		isfar = isfar * 3 + 1;

	while (isfar > 0)
	{
		for (k = isfar; k < size; k++)
		{
			temp = array[k];
			p  = k;
			while (p >= isfar && array[p - isfar] > temp)
			{
				array[p] = array[p - isfar];
				p = p - isfar;
			}
			array[p] = temp;
		}
		isfar = (isfar - 1) / 3;
		print_array(array, size);
	}
}
