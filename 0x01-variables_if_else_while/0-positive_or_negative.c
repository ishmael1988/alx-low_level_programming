#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print if the number is positive,nagative or 0
 * Return: always 0
 */
int main(void)
{

	int n;
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is nagative\n", n);
	}

	return (0);
}
