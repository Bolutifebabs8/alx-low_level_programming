#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars, and
 * initializes it with a specific char.
 *
 * @size: size of the array to be created
 * @c: character to be initialized with
 *
 * Return: Returns a character
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		ar = malloc(size * sizeof(char));

		if (ar == NULL)
		{
			return (NULL);
		}
		else
		{
			while (i < size)
			{
				ar[i] = c;
				i++;
			}
		}
	}
	
	return (ar);
}
