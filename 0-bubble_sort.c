#include "sort.h"
#include <stddef.h>

/**
 * bubble_sort - sorts an array of ints in ascending order
 * @array: array of integers to be sorted
 * @size: size of the array
 *
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	int swapped;

	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				swapped = 1;

				print_array(array, size);
			}
		}

		if (swapped == 0)
			break;
	}
}

/**
 * swap - swaps two integers
 * @a: first integer to swap
 * @b: second integer to swap
 *
 * Return: void
 */

void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
