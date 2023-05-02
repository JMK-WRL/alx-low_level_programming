#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked list
 * @h: linked list
 * Return: Number of elements (node)
 */

size_t listint_len(const listint_t *h)
{
	size_t a;

	a = 0;

	while (h)
	{
		a++;
		h = h->next;
	}
	return (a);
}
