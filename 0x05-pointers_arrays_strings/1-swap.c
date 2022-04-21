#include "main.h"

/**
 * swap_int: swaps the values of two integers.
 *
 * @a and @b: integers to be swapped
 *
 * Return: Doesn't return anything
 */

void swap_int(int *a, int *b)
{
	*a = b;
	*b = a;
}
