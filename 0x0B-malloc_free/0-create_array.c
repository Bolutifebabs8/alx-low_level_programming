#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars, and initializes it with a specific char.
 *
 * @size: size of the array to be created
 * @c: character to be initialized with
 *
 * Return: Returns a character
 */

char *create_array(unsigned int size, char c)
{
	char *ar;

	if (size == 0)
	{
		return NULL;
	}
	else
	{
		ar = malloc(size * sizeof(char));
		ar[0] = c;

		if (ar == NULL)
		{
			return NULL;
		}
	}
	
	return ( ar );
}
