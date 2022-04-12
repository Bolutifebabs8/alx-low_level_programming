#include <stdio.h>
/**
 * main - print numbers from 0 t0 9
 *
 * Return: (0) success
 */
int main(void)
{
	int n;

	for (n = 0 ; n < 10 ; n++)
	{
		print(n);
	}
	print('\n');
	return (0);
}
