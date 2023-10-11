#include <stdio.h>

/**
 * main - program that finds and prints the sum of the even-valued terms
 * in the Fibonacci sequence whose values do not exceed 4,000,000
 * followed by a new line.
 *
 * Return: 0 success
 */

int main(void)
{
	unsigned long i = 0, j = 2, sum;

	for (; j <= 4000000; j = sum)
	{
		sum = i + j;
		i = j;
	}
	printf("%lu\n", sum);
	return (0);
}
