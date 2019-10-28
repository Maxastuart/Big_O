#include "sort.h"

/**
 * insertion_sort_list - sorts a 2x linked list of integers in ascending order
 * @list: A doubly linked list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *temp2, *temp = (*list)->next;

        if (list == NULL)
                return;

	while (temp != NULL)
	{
		if (temp->prev->n > temp->n)
		{
			temp2 = temp;
			temp = temp->prev;
			do {
				temp2->prev->next = temp2->next;
				temp2->next->prev = temp2->prev;
				temp2->next = temp2->prev;
				if (temp2->prev->prev != NULL)
				{
					temp2->prev = temp2->prev->prev;
					temp2->prev->prev->next = temp2;
 					temp2->next->prev = temp2;
				}
				else
				{
/*					temp2->temp2;*/
					temp2->prev = NULL;
					*list = temp2;
					}
 				temp2 = temp2->prev;
				print_list(*list);
			} while (temp2 != NULL &&
				 temp2->prev != NULL &&
				 temp2->prev->n > temp2->n);
		}
		temp = temp->next;
	}
}
