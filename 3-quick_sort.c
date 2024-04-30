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
 * quick_sort - Sorts an array of integers in ascending order
 *              using the Quick sort algorithm.
 * @array: The array to sort.
 * @size: The size of the arrat.
 */
void quick_sort(int *array, size_t size)
{

}
