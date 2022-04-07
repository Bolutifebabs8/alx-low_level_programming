#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char acharacter;
	int ainteger;
	long along;
	long long alonglong;
	float afloat;

	printf("Size of a char: %lu byte(s)\n", sizeof(acharacter));
	printf("Size of an int: %lu byte(s)\n", sizeof(ainteger));
	printf("Size of an long int: %lu byte(s)\n", sizeof(along));
	printf("Size of an long long int: %lu byte(s)\n", sizeof(alonglong));
	printf("Size of an float: %lu byte(s)\n", sizeof(afloat));

	return (0);
}
	
