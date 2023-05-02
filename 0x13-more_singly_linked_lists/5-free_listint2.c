#include "lists.h"

/**
 * free_listint2 - function that frees a list
 * @head: pointet to the listint_t that is to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *x;

	x = 0;

	if (head == NULL)
	{
		return;
	}
	while (*head)
	{
		x = (*head)->next;
		free(*head);
		*head = x;
	}
	*head = NULL;
}
