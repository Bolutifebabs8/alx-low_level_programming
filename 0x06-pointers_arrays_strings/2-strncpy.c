#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncpy - copies a string.
 *
 * @dest: First char to be evaluated
 * @src: Second char to be evaluated
 * @n: number to be copied to
 *
 * Return: Returns character dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
