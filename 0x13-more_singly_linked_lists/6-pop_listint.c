#include "lists.h"

/**
 * pop_listint - function that deletes the head of a node of a linked list
 * @head: Pointer to elements
 *
 * Return: Data or 0 if lists is empty
 */

int pop_listint(listint_t **head)
{
	int x;
	listint_t *y;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	y = *head;
	*head = y->next;
	x = y->n;
	free(y);

	return (x);
}
