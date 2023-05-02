#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data(n) in a list
 * @head: Node in list
 * Return: Sum
 */

int sum_listint(listint_t *head)
{
	int x;
	listint_t *y = head;

	x = 0;

	while (y)
	{
		x += y->n;
		y = y->next;
	}

	return (x);
}
