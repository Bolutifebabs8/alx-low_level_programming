#include "main.h"

/**
 * is_palindrome -  returns 1 if a string is a palindrome and 0 if not.
 *
 * @s: string to be checked.
 *
 * Return: returns 1 or 0.
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);

	if (*s != '\0')
		return (0);
}
