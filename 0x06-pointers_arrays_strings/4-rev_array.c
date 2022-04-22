#include <stdio.h>
#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 *
 * @a: an array of integers.
 * @n: the number of elements to swap.
 *
 * Return: Doesn't return anything
 */

void reverse_array(int *a, int n)
{
	int j;

	n--;

	for (j = 0; j < (n / 2); j++)
	{
		int m;
		m = a[j];
		a[j] = a[n - j];
		a[n - j] = m;
	}
}
