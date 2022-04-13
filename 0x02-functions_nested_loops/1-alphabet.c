#include <stdio.h>
#include "main.h"

/**
 * print_alphabet: Print all alphabets in lowercase
 *
 * Return: Doesn't return anything
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
