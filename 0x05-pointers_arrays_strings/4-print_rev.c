#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - prints a string, in reverse.
 *
 * @s: String to be printed
 *
 * Return: Doesn't return anything
 */

void print_rev(char *s)
{
	int i;

	for (i = strlen(*s); i >= 0; i--)
	{
		putchar(*s[i]);
	}
}
