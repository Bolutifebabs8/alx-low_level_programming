#include <stdio.h>
#include "main.h"

/**
 * print_times_table prints the n times table, starting with 0
 *
 * Return: Doesn't return anything
 */

void print_times_table(int n)
{
	int i;
	int j;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			int k = i * j;

			if (n < 15 && n > 0)
			{
				if (k > 100)
				{
					putchar(k % 100 + '0');
					putchar((k / 10) % 10 + '0');
					putchar(k % 10 + '0');
				}
				else if (k > 10)
				{
					putchar(k / 10 + '0');
					putchar(k % 10 + '0');
				}
				else
				{
					putchar(k + '0');
				}
				
				if (j != n)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		putchar('\n');
	}
}
