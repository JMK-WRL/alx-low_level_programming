#include "lists.h"

/**
 * print_list - function that prints all the elements of a list
 * @h: number of nodes
 * Return: The number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t x;
	const list_t *node = h;

	x = 0;

	while (node != NULL)
	{
		if (node->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", node->len, node->str);

		x++;
		node = node->next;
	}
	return (x);
}
