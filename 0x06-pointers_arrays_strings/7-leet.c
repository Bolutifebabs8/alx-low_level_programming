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
	char arr[10] = {'a','A','e','E','o','O','t','T','l','L'};
	char num[10] = {4,4,3,3,0,0,7,7,1,1};

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
