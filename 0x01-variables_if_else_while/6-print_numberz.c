#include <stdio.h>
/*
 * main - print numbers from 0 to 9
 *
 * Return: (0) Success
 */
int main(void)
{
	int n;

	for (n = 0 ; n < 10 ; n++)
	{
		putchar(n + '0');
	}
	putchar('\n');
	return (0);
}
