#include <stdio.h>

/**
 * main - prints all strings from 0 to 9
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		prints("%d", num);

	prints("\'n');

	return (0);
}
