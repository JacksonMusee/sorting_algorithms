#include "sort.h"

/**
 *bubble_sort - Implements bubble sort
 *
 *@array: Pointer to the array to sort
 *@size: Array size
 *
 */

void bubble_sort(int *array, size_t size)
{
	int tmp;
	int *arr = array;
	bool swapped = false;
	bool start = true;
	size_t i = 0;

	if (arr == NULL)
		exit(EXIT_SUCCESS);

	while (swapped || start)
	{
		start = false;
		swapped = false;

		while (i < size - 1)
		{
			if (*(arr + i) > *(arr + (i + 1)))
			{
				tmp = arr[i];
				arr[i] = *(arr + (i + 1));
				arr[i + 1] = tmp;
				swapped = true;
				print_array(arr, size);
			}
			i++;
		}
		i = 0;
	}
}
