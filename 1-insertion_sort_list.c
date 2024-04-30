#include "sort.h"

/**
 * swap - swaps two node.
 *
 * @node: The first node.
 * @prev: The prevouis node.
 */
void swap(listint_t *node, listint_t *prev)
{
	prev->next = node->next;
	if (node->next)
		node->next->prev = prev;

	node->prev = prev->prev;
	if (prev->prev)
		prev->prev->next = node;
	node->next = prev;
	prev->prev = node;
}


/**
 * insertion_sort_list - sorts a doubly linked list of integers
 *                       in ascending order using the Insertion
 *                       sort algorithm.
 * @list: A doubly linked list of integers.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *next, *prev;

	if (!list || !(*list))
		return;

	current = *list;
	while (current && current->next)
	{
		current = current->next;
		next = current;
		prev = current->prev;
		while (prev && next && prev->n > next->n)
		{
			swap(next, prev);
			prev = next ? next->prev : NULL;
			if (!prev)
				*list = next;
			print_list(*list);
		}
	}
}
