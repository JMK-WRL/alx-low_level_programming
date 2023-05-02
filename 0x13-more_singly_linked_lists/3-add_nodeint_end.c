#include "lists.h"

/**
 * add_nodeint_end - function that adds new node at the end of a list
 * @head: double pointer
 * @n: node to be added
 * Return: address of new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *x;
	listint_t *y = *head;

	x = 0;

	x = malloc(sizeof(listint_t));
	if (!x)
	{
		return (NULL);
	}
	x->n = n;
	x->next = NULL;

	if (*head == NULL)
	{
		*head = x;
		return (x);
	}

	while (y->next)
	{
		y = y->next;
	}

	y->next = x;

	return (x);
}

