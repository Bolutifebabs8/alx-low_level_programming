#include "main.h"

/**
 * *string_toupper -  changes all lowercase letters of a string to uppercase.
 *
 * @c: array to be examined
 *
 * Return: returns a character
 */

char *string_toupper(char *c)
{
	int i;

	i = 0;

	while (c[i] != '\0')
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			c[i] -= 32;
		}
		i++;
	}
	return (c);
}
