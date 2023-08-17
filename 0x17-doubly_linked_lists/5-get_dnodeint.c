#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a list
 * @head: ponter to the head node
 * @index: index of the node
 * Return: pointer to the nthn node or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *current = head;

	for (i = 0; current != NULL && i < index; i++)
	{
		current = current->next;
	}

	return (current);
}
