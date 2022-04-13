#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * _islower - checks for lowercase character
 *
 * Return: (1) Success, (0) Otherwise
 */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return(0);
	}
}
