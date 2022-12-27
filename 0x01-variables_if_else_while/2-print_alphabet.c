#include <stdio.h>

/**
 * main - print alpha in lower case
 * Return: always 0
*/

int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
	}
	putchar('\n');
	return (0);
}
