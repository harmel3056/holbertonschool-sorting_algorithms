#include "sort.h"
#include <stddef.h>

/**
 * insertion_sort_list - sorts a doubly-linked list of ints
 * in ascending order
 * @list: doubly-linked list of integers
 *
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{
	int i;
	int j;
	int key;

	while (j >= 0 && arr[j] > key)
	{
		arr[j + 1] = arr[j];
		j = j - 1;
	}
	arr[j + 1] = key;
}

{
	listint_t *current = 0;

	
	for (i = 0, i < list

/**
 * create a key[next] before swap - points to the next int after swaps are done
 * compare j & (j + 1)
 * if (j + 1) < j, SWAP
 * if (j + 1) < (j - 1) SWAP, need to recurse this until arr[0] OR (j + 1) > arr[_]
 * key[next] becomes j and this outer loop starts over
