#include <stdio.h>

/**
 * main - prints the alphatbet in lower case
 * fallowed by a new line, except q and e
 * Return: Always 0
 */
int main(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		if (la != 'e' && la != 'q')
			puychar(la);
	}

	putchar('\n');

	return (0);
}
