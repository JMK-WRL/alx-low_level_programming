#include "lists.h"

/**
 * reverse_listint - function that reverses a linked list
 * @head: double pointer to head
 * Return: address to reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *new = NULL;
	listint_t *x = NULL;
	listint_t *old = *head;

	if (!head || !(*head))
	{
		return (*head);
	}

	new = old->next;
	old->next = NULL;

	while (new)
	{
		x = new->next;
		new->next = old;
		old = new;
		new = x;
	}
	*head = old;

	return (*head);
}
