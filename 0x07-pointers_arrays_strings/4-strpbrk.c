#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 *
 * @s: string to be checked.
 * @accept: second string to be checked
 *
 * Return: Returnns a character
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}
	return (NULL);
}
