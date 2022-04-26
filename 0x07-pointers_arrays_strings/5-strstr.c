#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strstr - locates a substring.
 *
 * @haystack: string to be searched
 * @needle: String to be found.
 *
 * Return: Returns a character.
 */

char *_strstr(char *haystack, char *needle)
{
	char *i;

	i = strstr(haystack, needle);

	return (i);
}
