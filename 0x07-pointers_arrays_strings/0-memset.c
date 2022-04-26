#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 *
 * @s: char to be pointed.
 * @b: constant byte.
 * @n: n bytes to be filled.
 *
 * Return: Returns a character.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
