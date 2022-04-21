#include "main.h"

/**
 * _puts - prints a string
 *
 * @str: string to be printed.
 *
 * Return: Doesn't return anything
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	putchar('\n');
}
