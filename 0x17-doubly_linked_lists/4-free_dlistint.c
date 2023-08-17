#include "lists.h"

/**
 * free_dlistint - free a dlistint_t list
 * @head: pointer to the head node of the list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
