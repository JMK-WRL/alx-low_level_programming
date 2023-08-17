#include "lists.h"

/**
 * sum_dlistint - returns the sum of the data in a list
 * @head: pointer to the head node
 * Return: sum of the data or 0
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
