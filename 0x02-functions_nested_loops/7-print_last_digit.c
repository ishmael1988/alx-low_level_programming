#include "main.h"
/**
 * print_last_digit - print the last digit
 * @n: the number
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)
		ld *= -1;
	putchar(ld + '0');
	return (0);
}
