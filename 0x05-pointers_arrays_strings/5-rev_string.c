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
	int k = strlen(s);

	for (i = 0; i < k; i++)
	{
		char m;

		m = s[i];
		s[i] = s[k - i];
		s[k - i] = m;
	}
}
