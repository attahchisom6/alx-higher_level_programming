#include "function_pointers.h"
/**
  * array_iterator - calls function
  * @array: passed from main
  * @size: size of array
  * @action: pointer to function you need to use
  * Description: Function that executes a function given as a parameter on
  * each element of an array.
  * Return: 0
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
