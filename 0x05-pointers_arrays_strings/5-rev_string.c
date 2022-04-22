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
	int j = strlen(s);
	int k = (j / 2);
	
	j--;

	for (i = 0; i < k; i++)
	{
		char m;

		m = s[i];
		s[i] = s[j - i];
		s[j - i] = m;
	}
}
