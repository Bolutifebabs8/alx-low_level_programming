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
	int i;

	i = strpbrk(s, accept);

	return (i);
}
