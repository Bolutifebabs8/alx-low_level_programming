#include <stdio.h>

/**
 * main - Prints the sum of the even-valued terms,
 * whose values do not exceed 4000000
 *
 * Return: Always 0.
 */

int main(void)
{
	int a = 1;
	int b = 2;
	int c;
	long sum = 2;

	do {
		c = a + b;
		if ((c % 2) == 0)
		{
			sum += c;
		}
		a = b;
		b = c;
	} while (c < 4000000);

	printf("%ld\n", sum);
	return (0);
}
