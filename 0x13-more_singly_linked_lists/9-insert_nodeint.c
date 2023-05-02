#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node at a position
 * @head: pointer to the first node
 * @idx: The index to the added node
 * @n: data
 *
 * Return: pointer to the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *x;
	listint_t *y = *head;
	unsigned int data;

	data = 0;

	x = malloc(sizeof(listint_t));
	if (!x || head)
	{
		return (NULL);
	}
	x->n = n;
	x->next = NULL;

	if (idx == 0)
	{
		x->next = *head;
		*head = x;
		return (x);
	}

	for (data = 0; data && y; data++)
	{
		if (data == idx - 1)
		{
			x->next = y->next;
			y->next = x;
			return (x);
		}
		else
		{
			y = y->next;
		}
	}
	return (NULL);
}
