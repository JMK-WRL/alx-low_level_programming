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
	unsigned int x;
	listint_t *current;
	listint_t *new;

	if (head == NULL)
	{
		return (NULL);
	}
	if (idx != 0)
	{
		current = *head;
		for (x = 0; x < idx - 1 && current != NULL; x++)
		{
			current = current->next;
		}
		if (current == NULL)
		{
			return (NULL);
		}
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = current->next;
	current->next = new;
	return (new);
}
