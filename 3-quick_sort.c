#include "sort.h"

/**
 * swap - swaps the elements at indexes i and j
 *        in the array `array`.
 * @array: The array.
 * @i: The first element index.
 * @j: The second element index.
 * @size: The array's size.
 */
void swap(int *array, size_t i, size_t j, size_t size)
{
	if (i == j)
		return;
	array[i] = array[i] + array[j];
	array[j] = array[i] - array[j];
	array[i] = array[i] - array[j];
	print_array(array, size);
}

/**
 * quick_sort - Sorts an array of integers in ascending order
 *              using the Quick sort algorithm.
 * @array: The array to sort.
 * @size: The size of the array.
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL)
		return;

	quick_sort_recursive(array, 0, size - 1, size);
}

/**
 * quick_sort_recursive - Recursively sorts the portion of the array
 *                        delimited by the indexes lo and hi.
 * @array: The array to sort.
 * @lo: The lower index.
 * @hi: The higher index.
 * @size: The array's size.
 */
void quick_sort_recursive(int *array, size_t lo, size_t hi, size_t size)
{
	size_t pivot;

	if (lo >= hi)
		return;

	pivot = partition(array, lo, hi, size);
	if (pivot >= 1)
		quick_sort_recursive(array, lo, pivot - 1, size);
	quick_sort_recursive(array, pivot + 1, hi, size);
}

/**
 * partition - Partions the array arround a pivot and return the
 *             index of the pivot.
 * @array: The array to partition.
 * @lo: The lower index.
 * @hi: The higher index.
 * @size: The array's size.
 *
 * Return: The index of the pivot.
 */
size_t partition(int *array, size_t lo, size_t hi, size_t size)
{
	int pivot;
	size_t i, pivot_idx;

	pivot = array[hi];

	pivot_idx = lo;
	for (i = lo; i <= hi - 1; i++)
	{
		if (array[i] <= pivot)
		{
			swap(array, pivot_idx, i, size);
			pivot_idx++;
		}
	}

	swap(array, pivot_idx, hi, size);
	return (pivot_idx);
}
