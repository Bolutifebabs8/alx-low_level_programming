#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Returns: Always 0.
 */

int main(void)
{
	long a = 1;
	long b = 2;
	int i;
	long s;

	printf("%d, %d, ", a, b);

	for (i = 0; i < 50; i++)
	{
		s = a + b;
		if (i == 49)
		{
			printf("%d", s);
		}
		else
		{
			printf("%d, ", s);
		}
		a = b;
		b = s;
	}
	putchar('\n');
	return (0);
}
