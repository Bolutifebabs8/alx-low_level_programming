#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 *
 * Return: Always 0.
 */

int main(void)
{
	long a = 1;
	long b = 2;
	long c;
	int i;

	printf("%ld, %ld, ", a, b);

	for (i = 0; i < 96; i++)
	{
		c = a + b;
		if (i == 95)
		{
			printf("%ld", c);
		}
		else
		{
			printf("%ld, ", c);
		}
		a = b;
		b = c;
	}
	putchar('\n');
	return (0);
}
