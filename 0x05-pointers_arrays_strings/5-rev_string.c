#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rev_string -  reverses a string.
 *
 * @s: String to be reversed
 *
 * Return: Doesn't return anything.
 */

void rev_string(char *s)
{
	int i;

	for (i = 0; i < (strlen(s) / 2); i++)
	{
		char m;

		m = *s[i];
		*s[i] = *s[strlen(s) - i];
		*s[strlen(s) - i] = m;
	}
}
