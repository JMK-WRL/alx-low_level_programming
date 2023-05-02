#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index of
 * list at the given index
 * @head: pointer to the first element
 * @index: index of the node
 *
 * Return: 1 (success), -1 (fail)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *x = *head;
	listint_t *y = NULL;
	unsigned int a;

	a = 0;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(x);
		return (1);
	}
	while (a < index - 1)
	{
		if (!x || !(x->next))
		{
			return (-1);
		}
		x = x->next;
		a++;
	}
	y = x->next;
	x->next = y->next;
	free(y);

	return (1);
}
