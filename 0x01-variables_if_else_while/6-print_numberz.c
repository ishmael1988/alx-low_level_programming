#include <stdio.h>

/**
 * main - prints all strings from 0 to 9
 * Return: always 0
*/

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		printf("%d", num);

	printf("\n");

	return (0);
}
