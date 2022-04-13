#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isalpha: checks for alphabetic character
 *
 * Return: (1) Success, (0) Otherwise
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
