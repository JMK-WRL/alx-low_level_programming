#include "main.h"
#include <stdlib.h>

/**
 * strtow - spilts a string into words
 * @str: string to be split
 * Return: pointer to an array of strings
 */

char **strtow(char *str)
{
	char **matrix, *tmp;
