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
	listint_t *current;
	listint_t *key;

	if (list == NULL)
		return;

	current = *list;
	key = (*list)->next;

	while (key != NULL)
	{
		current = key;
		key = key->next;

		while (current->prev && current->n < current->prev->n)
		{
			listint_t *temp = current->prev;

			temp->next = current->next;
			if (current->next != 0)
				current->next->prev = temp;

			current->prev = temp->prev;
			current->next = temp;

			if (temp->prev != 0)
				temp->prev->next = current;
			else
				*list = current;

			temp->prev = current;

			print_list(*list);
		}
	}
}
