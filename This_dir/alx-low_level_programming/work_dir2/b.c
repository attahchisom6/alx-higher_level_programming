#include "sort.h"

void insertion_sort(int *array, size_t size)
{
	int k, p, temp, flag = 1;
	
	for (k = 1; k < size; k++)
	{
		temp = array[k];

		flag = 0;
		p = k - 1;
		while (p >= 0 && array[p] > temp)
		{
			array[p + 1] = array[p];
			/*print_array(array, size);*/
			p = p - 1;
		}
		array[p + 1] = temp;
		print_array(array, size);
		flag = 1;
	}
}


/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    insertion_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}
