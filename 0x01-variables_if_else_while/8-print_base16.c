#include <stdio.h>
/**
 * main - print numbers and first 6 letters
 *
 * Return: (0) Success
 */
int main(void)
{
	char ch;
	int n;

	for (n = 0 ; n < 10 ; n++)
	{
		putchar(n + '0');
	}
	for (ch = 'a' ; ch <= 'f' ; ch++)
	{
		putchar(ch);
	}
	return (0);
}
