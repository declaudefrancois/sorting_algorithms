#ifndef SORT_H
#define SORT_H

#include <stdlib.h>
#include <stdio.h>


/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size);


/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void print_list(const listint_t *list);


/**
 * bubble_sort - Sorts an array of integers in ascending
 *               order using the Bubble sort algorithm.
 * @array: The array to sort.
 * @size: The size of the array.
 */
void bubble_sort(int *array, size_t size);

/**
 * insertion_sort_list - sorts a doubly linked list of integers
 *                       in ascending order using the Insertion
 *                       sort algorithm.
 * @list: A doubly linked list of integers.
 */
void insertion_sort_list(listint_t **list);

/**
 * selection_sort - Sorts an array of integers in ascending
 *                  order using the Selection sort algorithm.
 *
 * @array: An array of integers.
 * @size: The size of the array.
 */
void selection_sort(int *array, size_t size);

/**
 * quick_sort - Sorts an array of integers in ascending order
 *              using the Quick sort algorithm.
 * @array: The array to sort.
 * @size: The size of the arrat.
 */
void quick_sort(int *array, size_t size);

/**
 * quick_sort_recursive - Recursively sorts the portion of the array
 *                        delimited by the indexes lo and hi.
 * @array: The array to sort.
 * @lo: The lower index.
 * @hi: The higher index.
 * @size: The array's size.
 */
void quick_sort_recursive(int *array, size_t lo, size_t hi, size_t size);

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
size_t partition(int *array, size_t lo, size_t hi, size_t size);

#endif /* SORT_H */
