#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: string to be evaluated.
 *
 * Return: returns the length of the string
 */

int _strlen(char *s)
{
	int n = 0;

	while (*s != '\0')
	{
		s++;
		n++;
	}
	return (n);
}
