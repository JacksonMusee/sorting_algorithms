#include "sort.h"

/**
 *quick_sort - Quick sort implementation.
 *
 *@array: Array to sort
 *@size: Size of array
 *
 */

void quick_sort(int *array, size_t size)
{
	int tmp;
	static size_t sz;
	static int *arr = NULL;
	size_t pv = size - 1;
	size_t i = 0;
	size_t j = 0;

	if (arr == NULL)
	{
		arr = array;
		sz = size;
	}

	if (size < 2)
		return;
	while (i < pv)
	{
		if (array[i] <= array[pv])
		{
			i++;
			j++;
		}
		else
		{
			i++;
			if (i >= pv)
				break;

			if (array[i] < array[pv])
			{
				tmp = array[j];
				array[j] = array[i];
				array[i] = tmp;
				j++;
				i++;
				print_array(arr, sz);
			}
		}
	}
	tmp = array[j];
	array[j] = array[pv];
	array[pv] = tmp;
	print_array(arr, sz);
	quick_sort(array, j);
	quick_sort(array + j + 1, size - j - 1);
}
