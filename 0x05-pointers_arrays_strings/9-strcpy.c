#include "main.h"

/**
 * *_strcpy - copies the string pointed to by the src
 * @dest: char type string
 * @src: char type string
 * Description: copy the string pointed by the pointer 'src' to the
 * buffer pointed to by the dest.
 * Return: Pointer to 'dest'
 */

char *_strcpy(char *dest, char *src)
{
	int y;

	y = -1;
	do {
		y++;
		dest[y] = src[y];
	} while (src[y] != '\0');
	return (dest);
}
