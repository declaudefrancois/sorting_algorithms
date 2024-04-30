#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	int arrays[5][10] = {
		{19, 42, 7, 30, 18, 26, 11, 38, 5, 47},
		{22, 9, 30, 45, 17, 3, 39, 27, 13, 41},
		{37, 24, 11, 48, 5, 30, 16, 42, 28, 3},
		{8, 35, 22, 3, 40, 17, 29, 6, 43, 19},
		{14, 46, 33, 18, 5, 40, 2, 29, 21, 36}
	};

	for (i = 0; i < 5; i++)
	{
		print_array(arrays[i], 10);
		printf("\n");
		bubble_sort(arrays[i], 10);
		printf("\n");
		print_array(arrays[i], 10);
	}
	return (0);
}
