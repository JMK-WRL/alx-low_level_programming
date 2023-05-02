#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a list
 * @head: First node
 * @index: Index of the node to return
 *
 * Return: pointer to the nth node or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *x = head;
	unsigned int y;

	y = 0;

	while (x && y < index)
	{
		x = x->next;
		y++;
	}

	return (x ? x : NULL);
}
