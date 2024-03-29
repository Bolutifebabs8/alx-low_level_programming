#include "main.h"

/**
 * factorial - returns the factorial of a given number
 *
 * @n: number whose factorial is to be returned
 *
 * Return: returns an integer.
 */

int factorial(int n)
{
	if (n == 1 || n == 0)
		return (1);

	if (n < 0)
		return (-1);

	return (n * factorial(n - 1));
}
