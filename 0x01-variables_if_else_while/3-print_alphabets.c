#include <stdio.h>
/**
 * main - prints in lower and upper case
 * Return: Alaways 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	for (ch = 'A'; ch <= 'z'; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}
