#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9
 * excluding 2 and 4
 *
 * Return: Doesn't return Anything
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
		{
			putchar(i + '0');
		}
	}
	putchar('\n');
}
