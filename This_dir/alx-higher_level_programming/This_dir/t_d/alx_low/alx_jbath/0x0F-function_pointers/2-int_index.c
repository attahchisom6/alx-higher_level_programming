#include "function_pointers.h"
/**
  * int_index - calls function
  * @array: passed from main
  * @size: size of array
  * @cmp: pointer to function you need to use
  * Description: Function that searches for a an integer
  * each element of an array.
  * Return: 0
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		return (i);
	}
	return (-1);
}
