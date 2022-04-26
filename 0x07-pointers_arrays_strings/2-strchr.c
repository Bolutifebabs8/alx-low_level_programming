#include "main.h"

/**
 * _strchr - locates a character in a string.
 *
 * @s: String to be searched.
 * @c: Character  to be located.
 *
 * Return: Returns a Character.
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s);
		}
		s[i] = s[i + 1];
	}
	return NULL;
}
