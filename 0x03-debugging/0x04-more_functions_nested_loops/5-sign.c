#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the of the sign to be printed
 * Return: 1 if number is greater than zero
 * 0 of the number is zero
 * -1 if number is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar('0');
		return (0);
	}
	else
	{
		putchar('-');
		return (-1);
	}
}
