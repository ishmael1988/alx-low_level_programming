#include <stdio.h>


/**
  * main - the main printing funtion
  * less than 4000000.
  * Return: 0.
  */


int main(void)
{
	int i = 0;
	long j = 1, k = 2, sum = k;


	while (k + j < 4000000)
	{
		k += j;
		if (k % 2 == 0)
		sum += k;
		j = k - j;
		++i;
	}
	printf("%ld", sum);
	return (0);
}

