#include "main'h"

/**
 * rot13 - encodes a string using rot13.
 *
 * @c: string to be encoded
 *
 * Return: returns a character.
 */

char *rot13(char *c)
{
	int i, j;

	char x[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char y[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (c[i] == x[j])
			{
				c[i] = y[j];
				break;
			}
		}
	}
	return (c);
}
