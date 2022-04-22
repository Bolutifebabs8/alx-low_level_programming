#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts_half - prints half of a string.
 *
 * @str: string to be evaluated.
 *
 * Return: Doesn't return anything.
 */

void puts_half(char *str)
{
	int i;
	int l = strlen(str);

	if ((l % 2) == 0)
	{
		int k = l / 2;

		for (i = k; i < l; i++)
		{
			putchar(str[i]);
		}
		putchar('\n');
	}
	else
	{
		int k = (l - 1) / 2;

		for (i = k; i < l; i++)
		{
			putchar(str[i]);
		}
		putchar('\n');
	}
}
