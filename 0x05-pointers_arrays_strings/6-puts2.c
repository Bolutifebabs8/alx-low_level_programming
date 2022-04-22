#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts2 -  prints every other character of a string, 
 * starting with the first character.
 *
 * @str: String to be printed.
 *
 * Return: Doesn't return anything.
 */

void puts2(char *str)
{
	int i;
	int k = strlen(str);

	for (i = 0; i < k; i++)
	{
		if ((str[i] % 2) == 0)
		{
			putchar(str[i]);
		}
	}
	putchar('\n');
}
