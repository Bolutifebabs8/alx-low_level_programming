#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 *
 * Return: Last digit
 */
int print_last_digit(int n)
{
	int i = n % 10;

	_putchar(i + '0');
	return(i);
}
