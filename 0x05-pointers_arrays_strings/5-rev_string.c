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

	for (i = 0; i < k; i++)
	{
		char m;

		m = s[i];  // holds the first char in m
		s[i] = s[j - 1];   //replaces the first char with the last one
		s[j - 1] = m;  //replaces the last char with the first one
	}
}
