#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - concatenates two strings.
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: returns a character
 */

char *str_concat(char *s1, char *s2)
{
	char *ar;

	int i, j, k, l;

	i = strlen(s1);
	j = strlen(s2);

	ar = malloc((i + j) * sizeof(char));

	if (ar == NULL)
		return (NULL);
	else
	{
		k = 0;

		while (s1[k] != '\0')
		{
			ar[k] = s1[k];
			k++;
		}
		l = 0;
		while (s2[l] != '\0')
		{
			ar[k + l] = s2[l];
			l++
		}
	}
	return (ar);
}
