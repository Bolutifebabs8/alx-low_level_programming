#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 *
 * Return: Last digit
 */
int print_last_digit(int n)
{
	putchar(n % 10 + "0");
	return (n % 10);
}
