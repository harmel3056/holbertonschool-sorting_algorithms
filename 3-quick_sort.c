#include "sort.h"

/**
 * quick_sort - uses Lomuto partition to sort into ascending order
 * @array: array to be sorted
 * @size: size of the array
 *
 * Return: void
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quick_sort_rec(array, 0, (int)size - 1, size);
}

/**
 * quick_sort_rec - helper function for recursive Quick sort
 `* @array: array to be sorted
 * @low: starting index
 * @high: ending index
 * @size: size of the array (for printing)
 *
 * Return: void
 */

void quick_sort_rec(int *array, int low, int high, size_t size)
{
	int pi;

	if (low < high)
	{
		pi = partition(array, low, high, size);
		quick_sort_rec(array, low, pi - 1, size);
		quick_sort_rec(array, pi + 1, high, size);
	}
}

/**
 * partition - uses the last array elemend as pivot
 * places the pivot element at its correct position in sorted array
 * and places all elements smaller than pivot to the left
 * and all elements greater to the right
 * @arr: array
 * @low: starting index
 * @high: ending index
 *
 * Return: partition index
 */

int partition(int arr[], int low, int high, size_t size)
{
	int pivot, i, j;

	pivot = arr[high];
	i = low - 1;

	for (j = low; j <= high - 1; j++)
	{
		if (arr[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				swap(&arr[i], &arr[j]);
				print_array(arr, size);
			}
		}
	}
	if (i + 1 != high)
	{
		swap(&arr[i + 1], &arr[high]);
		print_array(arr, size);
	}

	return (i + 1);
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

