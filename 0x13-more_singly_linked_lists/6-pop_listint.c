#include "lists.h"

/**
 * pop_listint - function that deletes the head of a node of a linked list
 * @head: Pointer to elements
 *
 * Return: Data or 0 if lists is empty
 */

int pop_listint(listint_t **head)
{
	int y;
	listint_t *x;

	if (head || !*head)
	{
		return (0);
	}

	y = (*head)->n;
	x = (*head)->next;
	free(*head);
	*head = x;

	return (y);
}

