#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints if the number is positive,nagative or 0
 * Return: Always o
 */
int main(void)
{
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
	else if (n < 0)
	{
		printf("%d is nagative\n");
	}
	return (0);
}
