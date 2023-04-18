#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - prints length of a string
 * @s: string
 * Return: lenght of screen
 */

int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}

/**
 * _strcpy - function that copies a string
 * @dest: pointer
 * @src: string
 * Return: pointer
 */

char *_strcpy(char *dest, char *src)
{
	int a = 0, l = 0;

	while (src[l] != '\0')
	{
		l++;
	}

	for (a = 0; a < l; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';
	return (dest);
}

/**
 * new_dog - function that creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: Pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int x;
	int y;
	dog_t *D;

	x = _strlen(name);
	y = _strlen(owner);

	D = malloc(sizeof(dog_t));
	if (D == NULL)
	{
		return (NULL);
	}

	D->name = malloc(sizeof(char) * (x + 1));
	if (D->name == NULL)
	{
		free(D);
		return (NULL);
	}

	D->owner = malloc(sizeof(char) * (y + 1));
	if (D->owner == NULL)
	{
		free(D);
		free(D->name);
		return (NULL);
	}

	_strcpy(D->name, name);
	_strcpy(D->owner, owner);
	D->age = age;
	return (D);
}
