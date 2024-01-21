#include "sort.h"

/**
 *insertion_sort_list - Implments inserton sort
 *
 *@list: Pointer to a list
 *
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *jst_b4;
	listint_t *resume;
	bool swapped = true;
	listint_t *mvn_nd;

	if (!list)
	{
		exit(EXIT_SUCCESS);

	}
	else
	{
		mvn_nd = *list;
	}

	while (mvn_nd != NULL)
	{
		resume = mvn_nd->next;
		jst_b4 = mvn_nd->prev;
		while (jst_b4 != NULL && swapped)
		{
			swapped = false;
			if (jst_b4->n > mvn_nd->n)
			{
				jst_b4->next = mvn_nd->next;
				if (jst_b4->next)
					jst_b4->next->prev = jst_b4;
				if (jst_b4->prev != NULL)
				{
					jst_b4->prev->next = mvn_nd;
				}
				else
				{
					*list = mvn_nd;
				}
				mvn_nd->prev = jst_b4->prev;
				mvn_nd->next = jst_b4;
				jst_b4->prev = mvn_nd;
				swapped = true;
				print_list(*list);
			}
			jst_b4 = mvn_nd->prev;
		}
		mvn_nd = resume;
		swapped = true;
	}
}
