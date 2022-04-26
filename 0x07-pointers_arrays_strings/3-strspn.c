#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring.
 *
 * @s: string to be evaluated.
 * @accept: bytes to be evaluated.
 *
 * Return: Returns an unsigned int.
 */

unsigned int _strspn(char *s, char *accept);
{
	int i;

	i = strspn(s, accept);

	return (i);
}
