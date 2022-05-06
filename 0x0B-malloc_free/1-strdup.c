#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: string to be duplicated
 *
 * Return: Returns a character
 */

char *_strdup(char *str)
{
	char *ar;
	int i;
	int j = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		i = strlen(str);
		ar = malloc(i * sizeof(char));

		if (ar == NULL)
		{
			return (NULL);
		}
		else
		{
			while (j < i)
			{
				ar[i] = str[i];
				i++;
			}
		}
	}

	return (ar);
}
