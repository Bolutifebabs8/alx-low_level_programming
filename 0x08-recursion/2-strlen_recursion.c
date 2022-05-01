#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 *
 * @s: String length to be calculated
 *
 * Return: Returns langth of string s.
 */

int _strlen_recursion(char *s)
{
	int i;

	if (*s != '\0')
	{
		i++;
		_strlen_recursion(s + 1);
	}
}
