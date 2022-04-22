#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 *
 * @dest: the buffer to be pointed to
 * @src: string to be copied from.
 *
 * Return: returns the pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	dest = src;
	*dest = &src;

	return (dest);
}
