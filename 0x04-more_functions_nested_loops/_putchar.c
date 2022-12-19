#include "main.h"
#include <unistd.h>

/**
 * _putchar - write the character c stdout
 * @c: the character to print
 * Return: on succces 1
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
