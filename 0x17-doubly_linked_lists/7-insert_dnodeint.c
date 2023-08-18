#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to a pointer to the head node
 * @idx: index of the list
 * @n: value to be assigned to the new node
 * Return: The address of the new node or NULL if it fails
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *New;
	dlistint_t *Head;
	unsigned int i;

	New = NULL;
	if (idx == 0)
		New = add_dnodeint(h, n);
	else
	{
		Head = *h;
		i = 1;
		if (Head != NULL)
			while (Head->prev != NULL)
				Head = Head->prev;
		while (Head != NULL)
		{
			if (i == idx)
			{
				if (Head->next == NULL)
					New = add_dnodeint_end(h, n);
				else
				{
					New = malloc(sizeof(dlistint_t));
					if (New != NULL)
					{
						New->n = n;
						New->next = Head->next;
						New->prev = Head;
						Head->next->prev = New;
						Head->next = New;
					}
				}
				break;
			}
			Head = Head->next;
			i++;
		}
	}

	return (New);
}
