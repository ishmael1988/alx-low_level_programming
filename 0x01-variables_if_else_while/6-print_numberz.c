#include <stdio.h>

/**
 * main - print all single nunber from 0 to 9
 * Return: 0
*/

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
	}

	putchar('\n');

	return (0);
}
