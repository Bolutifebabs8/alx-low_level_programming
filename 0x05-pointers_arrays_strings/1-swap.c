#include "main.h"

/**
 * swap_int: swaps the values of two integers.
 *
 * @a: value to be evaluate.
 * @b: value to be evaluate.
 *
 * Return: Doesn't return anything
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	int d = *b;
	*a = d;
	*b = c;
}
