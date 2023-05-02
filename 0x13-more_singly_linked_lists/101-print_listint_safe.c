#include "lists.h"

/**
 * looped_listint_len - counting the number of unique nodes in looped
 * listint_t linked list
 * @head: pointer to the head
 *
 * Return: 0 if list in not looped, otherwise - number of unique nodes
 */

size_t looped_listint_len(const listint_t *head)
{
	size_t a;
	const listint_t *x, *y;

	a = 1;

	if (head == NULL || head->next == NULL)
	{
		return (0);
	}

	x = head->next;
	y = (head->next)->next;

	while (y)
	{
		if (x == y)
		{
			x = head;
			while (x != y)
			{
				a++;
				x = x->next;
				y = y->next;
			}

			x = x->next;

			while (x != y)
			{
				a++;
				x = x->next;
			}

			return (a);
		}

		x = x->next;
		y = (y->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - function that prints a listint linked list
 * safely
 * @head: pointer to the head
 *
 * Return: Number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t a;
	size_t inx;

	inx = 0;

	a = looped_listint_len(head);

	if (a == 0)
	{
		for (; head != NULL; a++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (inx = 0; inx < a; inx++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("->[%p] %d\n", (void *)head, head->n);
	}
	return (a);
}
