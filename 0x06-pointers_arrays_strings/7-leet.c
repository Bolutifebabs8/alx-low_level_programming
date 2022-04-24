#include "main.h"

/**
 * leet -  encodes a string into 1337.
 *
 * @c: string to be encoded
 *
 * Return: Return a character
 */

char *leet(char *c)
{
	int i,j;
	char arr[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (c[i] == arr[j])
			{
				c[i] = num[j];
			}
		}
	}
	return (c);
}
