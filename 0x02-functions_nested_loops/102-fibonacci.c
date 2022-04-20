#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Returns: Always 0.
 */

int main(void)
{
	int a = 1;
	int b = 2;
	int i, s;

	printf("%i, %i, ", a , b);

	for (i = 0; i < 50; i++)
	{
		s = a + b;
		printf("%i, ", s);
		a = b;
		b = s;
	}
	putchar('\n');
	return (0);
}
