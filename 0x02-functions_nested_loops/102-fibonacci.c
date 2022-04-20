#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 * starting with 1 and 2
 *
 * Return: Always 0.
 */

int main(void)
{
	long a = 1;
	long b = 2;
	int i;
	long s;

	printf("%ld, %ld, ", a, b);

	for (i = 0; i < 48; i++)
	{
		s = a + b;
		if (i == 47)
		{
			printf("%ld", s);
		}
		else
		{
			printf("%ld, ", s);
		}
		a = b;
		b = s;
	}
	putchar('\n');
	return (0);
}
