#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list
 * @head: double pointer
 * @str: string to be duplicated
 * Return: new address to the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len;
	list_t *N;
	list_t *T = *head;

	len = 0;

	while (str[len])
	{
		len++;
	}

	N = malloc(sizeof(list_t));
	if (!N)
	{
		return (NULL);
	}

	N->str = strdup(str);
	N->len = len;
	N->next = NULL;

	if (*head == NULL)
	{
		*head = N;
		return (N);
	}

	while (T->next)
	{
		T = T->next;
		T->next = N;
	}
		return (N);
}
