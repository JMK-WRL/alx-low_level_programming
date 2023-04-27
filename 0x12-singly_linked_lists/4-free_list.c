#include "lists.h"

/**
 * free_list - function that frees a list
 * @head: list to be freed
 */

void free_list(list_t *head)
{
	list_t *T;

	while (head)
	{
		T = head->next;
		free(head->str);
		free(head);
		head = T;
	}
}
