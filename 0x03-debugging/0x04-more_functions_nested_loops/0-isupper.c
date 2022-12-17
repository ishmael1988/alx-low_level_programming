#include "main.h"
/**
 * _isupper - A function that checks for upper character
 * @c: An input character
 * Return: 1 if c is uppercase or 0 otherwise
 */
int _isupper(int c)
{
char uppercase = 'A';
int isupper = 0;
for (; uppercase <= 'z'; upercase++)
{
	if (c == uppercase)
{
	isupper = 1;
	break;
}
}
return (isupper);
}
