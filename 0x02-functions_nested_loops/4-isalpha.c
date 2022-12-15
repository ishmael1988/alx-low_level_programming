#include "main.h"

/**
 * _isalpha - checks for alphabets
 * @c: character to be checked
 *
 * return: 1 if c  is a letter, lowercase or uppercase
 * Return: 0 otherwise
 */
int _isalpha(int c);
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
		return (1);
	else
		return (0);
}
