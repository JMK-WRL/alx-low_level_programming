#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list
 * @head: double pointer
 * @str: new string that is to be duplicated
 * Return: the address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int len;
	list_t *N;

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
	N->next = (*head);
	(*head) = N;

	return (*head);
}
