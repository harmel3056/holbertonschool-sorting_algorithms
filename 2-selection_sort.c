#include "sort.h"

/**
 * selection_sort - sorts array of ints into ascending size order
 * by comparing a key int with remaining ints and swapping for smaller ints
 * @array: array of ints to scan
 * @size: size of the array
 *
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	size_t i = 0;
	size_t j;
	int min_key;
	int temp;

	for (i = 0; i < size - 1; i++)
	{
		min_key = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[min_key] > array[j])
				min_key = j;
		}

		if (min_key != i)
		{
			temp = array[i];
			array[i] = array[min_key];
			array[min_key] = temp;
		}

		print_array(array, size);
	}
}

/**
 * selection_sort - key will be first array item
 * function will assume min_key is the lowest number
 * compares min_key with remaining ints to verify
 * if min_key is higher than current int being checked, key takes that value
 * min_key array reassigned and remainder of array is checked thusly
 */
