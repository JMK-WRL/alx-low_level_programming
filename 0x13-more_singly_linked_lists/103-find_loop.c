#include "lists.h"

/**
 * free_listint_safe - freeing a linked list
 * @h: pointer
 *
 * Return: number of elements
 */

size_t free_listint_safe(listint_t **h)
{
	size_t a;
	listint_t *b;
	int x;

	a = 0;

	if (!h || !*h)
	{
		return (0);
	}
	while (*h)
	{
		x = *h - (*h)->next;
		if (x > 0)
		{
			b = (*h)->next;
			free(*h);
			*h = b;
			a++;
		}
		else
		{
			free(*h);
			*h = NULL;
			x++;
			break;
		}
	}

	*h = NULL;

	return (a);
}
