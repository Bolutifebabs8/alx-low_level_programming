#include <stdio.h>
#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9.
 *
 * Return: Doesn't return anything.
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i);
	}
	putchar('\n);
}
