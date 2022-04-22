#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncat - concatenates two strings.
 *
 * @dest: First string to be concatenated.
 * @src: Second string to be concatenated.
 * @n: number of characters to be concatenated.
 *
 * Return: returns character dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j, k;
	i = strlen(dest);
	k = strlen(src);

	for (j = 0; j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}
	if (n < k)
	{
		dest[i] = '\0';
	}
	return (dest);
}
