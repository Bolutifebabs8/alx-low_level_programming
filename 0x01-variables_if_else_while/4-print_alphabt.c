#include <stdio.h>
/**
 * main - print alphabet in lowercase skipping q and e
 *
 * Return (0) Success
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		if (ch != 'e' && ch != 'q')
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
