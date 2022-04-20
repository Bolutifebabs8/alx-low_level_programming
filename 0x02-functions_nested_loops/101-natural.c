#include <stdio.h>

/**
 * main: prints the sum of all the multiples of 3 or 5 below 1024
 *
 * Return: (0) Success
 */

int main(void)
{
	int i;
	int s = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			s += i;
		}
	}
	putchar((s / 100000) + '0');
	putchar(((s / 10000) % 10) + '0');	
	putchar(((s / 1000) % 10) + '0');
	putchar(((s / 100) % 10) + '0');
	putchar(((s / 10) % 10) + '0');
	putchar((s % 10) + '0');
	putchar('\n');
	return (0);
}
