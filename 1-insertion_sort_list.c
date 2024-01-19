#include "sort.h"

void insertion_sort_list(listint_t **list)
{
	/*loop over the linked_list*/
	listint_t *item = *list, *item2;

	if (!list)
		return;
	while (item)
	{
		item2 = item;
		while (item2->prev)
		{
			if (item2->n < item2->prev->n)
			{
				swap(item2, item2->prev);
				printf("swaping 1: item = %d, item->prev = %d \n", item2->n, item2->prev->n);
			}
			else
				break;

			item2 = item2->prev;
		}
		item = item->next;
		print_list(*list);
	}
}
/**
 * swap - function to swap the nods of the linked list
 * @element: the first node
 * @element2: the last
 * Return: no return value
*/
void swap(listint_t *element, listint_t *element2)
{
	/*declaer temps*/
	listint_t *temp_next, *temp_prev;


	if (element->next)
		element->next->prev = element2;

	if (element2->prev)
		element2->prev->next = element;
	/*assuin temps by the element prev,next*/
	temp_prev = element2->prev;
	temp_next = element->next;
	/*make the change in the links */
	element2->prev = element;
	element->next = element2;
	element->prev = temp_prev;
	element2->next = temp_next;
	printf("swaping 1: item = %d, item->prev = %d \n", element->n, element2->n);

}
