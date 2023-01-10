#include "main.h"

/**
  * _puts_recursion - Function that prints strings
  * @s: Pointer to a string
  * Return: Nothing
  */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		 putchar('\n');
}
