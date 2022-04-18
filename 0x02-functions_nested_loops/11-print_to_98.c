#include <stdio.h>
#include "main.h"

/**
 * print_to_98 prints natural numbers from n to 98
 *
 * Return: Doesn't return anything
 */

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i < 10)
			{
				putchar(i + '0');
			}
			else
			{
				putchar(i / 10 + '0');
				putchar(i % 10 + '0');
			}
			if (i != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
		}
		if (i != 98)
		{
			putchar(',');
			putchar(' ');
		}
		putchar('\n');
	}
}
