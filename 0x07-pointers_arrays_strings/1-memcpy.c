#include "main.h"

/**
 * _memcpy - copies memory area.
 *
 * @dest: Char to be copied to.
 * @src: char to be copied.
 * @n: no of bytes to be copied.
 *
 * Return: returns a character.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
