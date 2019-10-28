#include "sort.h"

/**
 * insertion_sort_list - sorts a 2x linked list of integers in ascending order
 * @list: A doubly linked list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *temp = list->next, *temp2;

	while (temp != NULL)
	{
		if(temp->prev->n > temp->n)
		{
			temp2 = temp;
			while (temp2->prev->n > temp2->n)
			{
				temp2->prev->next = temp2->next;
				temp2->next->prev = temp2->prev;
				temp2->prev->prev->next = temp2;
				temp2->prev->prev = temp2;
				temp2->prev = temp2->prev->prev;
			}
		}
	}
}

