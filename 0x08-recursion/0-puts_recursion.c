#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line.
 *
 * @s: string to be printed.
 *
 * Return: Doesn't return anything
 */

void _puts_recursion(char *s)
{
	int i = 0;

	_putchar (s[i]);
	_puts_recursion (*s[i + 1]);
}
