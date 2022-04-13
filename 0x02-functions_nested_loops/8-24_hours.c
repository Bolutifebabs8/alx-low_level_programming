#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59
 *
 * Return: Doesn't return anything
 */
void jack_bauer(void)
{
	int h;
	int m;
	for (h = 0; h <= 23; h++)
	{
		for (m = 0; m <= 59; m++)
		{
			int i = h / 10;
			int j = h % 10;
			int x = m / 10;
			int y = m % 10;
			putchar(i);
			putchar(j);
			putchar(':');
			putchar(x);
			putchar(y);
			putchar('\n');
		}
	}
}
