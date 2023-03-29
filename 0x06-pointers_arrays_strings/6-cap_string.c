#include "main.h"

/**
 * *cap_string - function that capitalizes all the words of a string
 * @str: The string to be capitalized
 * Return: Pointer of the changed string
 */

char *cap_string(char *str)
{
	int C;

	C = 0;
	while (str[C])
	{
		while (!(str[C] >= 'a' && str[C] <= 'z'))
			C++;

		if (str[C - 1] == ' ' ||
		str[C - 1] == '\t' ||
		str[C - 1] == '\n' ||
		str[C - 1] == ',' ||
		str[C - 1] == ';' ||
		str[C - 1] == '.' ||
		str[C - 1] == '!' ||
		str[C - 1] == '?' ||
		str[C - 1] == '"' ||
		str[C - 1] == '(' ||
		str[C - 1] == ')' ||
		str[C - 1] == '{' ||
		str[C - 1] == '}' ||
		C == 0)
			str[C] -= 32;
		C++;
	}
	return (str);
}
