#include "sort.h"

int *swap(int *arr, int *a, int *b);

int main(void)
{
	int arr[] = {2,9, 7, 6, 4, 3, 8, 5};
	int k, n, *s;

	n = sizeof(arr) / sizeof(arr[0]);
	for (k = 0; k < n; k++)
	{
		if (arr[k] < arr[n - 1])
			s = swap(arr, &arr[0], &arr[k]);
	}
	printf("%d ", s[k]);
	printf("\n");
	return (0);
}

int *swap(int *arr, int *a, int *b)
{
	int temp, *s;;
	int k = 0;

	s = arr;
	while (s[k])
	{
		s[k] = *a;
		*a = *b;
		*b = s[k];
		k++;
	}
	return (s);
}
