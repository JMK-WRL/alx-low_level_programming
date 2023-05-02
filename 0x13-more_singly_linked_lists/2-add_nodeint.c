#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning of a list
 * @head: double pointer to the node
 * @n: new node to be added
 * Return: Address of new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *x;

	x = malloc(sizeof(listint_t));
	if (!x)
	{
		return (NULL);
	}
	x->n = n;
	x->next = *head;
	*head = x;

	return (x);
}
