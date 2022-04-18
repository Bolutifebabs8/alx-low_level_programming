#include <stdio.h>
#include "main.h"

/**
 * times_table - prints 9 times table
 *
 * Return: Doesn't return anything
 */
void times_table(void)
{
	int i;
	int j;
	int k;
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			if (k < 10)
			{
				if (j > 1)
				{
					_putchar(' ');
				}
				_putchar(k + '0');
			}
			else
			{
				_putchar(k / 10 + '0');
				_putchar(k % 10 + '0');
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
