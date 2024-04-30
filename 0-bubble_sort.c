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
	array[i] = array[i] + array[j];
	array[j] = array[i] - array[j];
	array[i] = array[i] - array[j];
}

/**
 * bubble_sort - Sorts an array of integers in ascending
 *               order using the Bubble sort algorithm.
 * @array: The array to sort.
 * @size: The size of the array.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	char swapped;

	do {
		swapped = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap(array, i, i + 1);
				swapped = 1;
				print_array(array, size);
			}
		}
	} while (swapped);
}
