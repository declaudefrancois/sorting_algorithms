#include "sort.h"


/**
 * swap - swaps the elements at indexes i and j
 *        in the array `array`.
 * @array: The array.
 * @i: The first element index.
 * @j: The second element index.
 */
void swap(int *array, int i, int j)
{
	if (i == j)
		return;
	array[i] = array[i] + array[j];
	array[j] = array[i] - array[j];
	array[i] = array[i] - array[j];
}


/**
 * selection_sort - Sorts an array of integers in ascending
 *                  order using the Selection sort algorithm.
 *
 * @array: An array of integers.
 * @size: The size of the array.
 */
void selection_sort(int *array, size_t size)
{
	size_t sorted_idx, unsorted_idx, smallest_idx;
	char sorted;

	for (sorted_idx = 0; sorted_idx < size; sorted_idx++)
	{
		/**
		 * Find the smallest integer in the unsorted sub-array.
		 */
		smallest_idx = sorted_idx;
		unsorted_idx = sorted_idx;
		sorted = 1;

		while (unsorted_idx < size - 1)
		{
			if (array[unsorted_idx + 1] < array[smallest_idx])
				smallest_idx = unsorted_idx + 1;
			if (array[unsorted_idx] > array[unsorted_idx + 1])
				sorted = 0;
			unsorted_idx++;
		}

		/*
		 * Both sub-arrays are sorted.
		 */
		if (sorted)
			break;
		/**
		 * Add the smallest integer of the unsorted sub-array
		 * in the sorted one.
		 */
		swap(array, sorted_idx, smallest_idx);
		print_array(array, size);
	}
}
