#include "sort.h"

/**
 *selection_sort - implementaton of selecton sort
 *
 *@array: The array to sort
 *@size: Size of array
 *
 */

void selection_sort(int *array, size_t size)
{
	int min_val;
	size_t min_val_idx = 0;
	size_t actv_idx = 1;
	size_t start_idx = 0;

	if (array == NULL)
		return;

	min_val = array[min_val_idx];
	while (start_idx < size)
	{
		while (actv_idx < size)
		{
			if (min_val > array[actv_idx])
			{
				min_val = array[actv_idx];
				min_val_idx = actv_idx;
			}

			actv_idx++;
		}

		if (array[start_idx] != min_val)
		{
			array[min_val_idx] = array[start_idx];
			array[start_idx] = min_val;
			print_array(array, size);
		}

		start_idx++;
		min_val = array[start_idx];
		actv_idx = start_idx + 1;
	}
}
