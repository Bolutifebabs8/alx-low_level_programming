#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcat - concatenates two strings.
 *
 * @dest: value to be concatenated.
 * @src: second value to be concatenated
 *
 * Return: Returns a character.
 */

char *_strcat(char *dest, char *src)
{
	int i, j;
	i = strlen(dest);
	j = 0;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
