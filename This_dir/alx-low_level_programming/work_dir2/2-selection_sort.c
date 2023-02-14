#include "sort.h"

/**
 * selection_sort - this function will arrange elements of a list in
 * ascending order starting from the smallest element in the list
 * @array: iist/array of integers
 * @size: size of the array
 *
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	size_t k, p, q;
	int *s, temp;

	if (array == NULL)
		return;

	s = array;
	p = 0;
	while (p < size)
	{
		q = p;
		for (k = p + 1; k < size; k++)
		{
			if (s[q] > s[k])
				q = k;
		}

		if (p != k)
		{
			temp = s[p];
			s[p] = s[q];
			s[q] = temp;
			print_array(s, size);
		}
		p++;
	}
}
