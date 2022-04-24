#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 *
 * @c: string to becapitalized.
 *
 * Return: returns a character
 */

char *cap_string(char *c)
{
	int i = 0;

	if (c[0] >= 'a' && c[0] <= 'z')
	{
		c[0] = c[0] - 32;
	}

	for (i = 0; c[i] != '\0'; i++)
	{
		switch (c[i])
		{
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
			case ' ':
			case '\n':
			case '\t':
				if (c[i + 1] > 96 && c[i + 1] < 123)
				{
					c[i + 1] = c[i + 1] - 32;
				}
		}
	}
	return (n);
}
