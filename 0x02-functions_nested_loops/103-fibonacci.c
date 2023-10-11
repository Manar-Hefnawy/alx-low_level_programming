#include <stdio.h>

/**
 * main - program that finds and prints the sum of the even-valued terms
 * in the Fibonacci sequence whose values do not exceed 4,000,000
 * followed by a new line.
 *
 * Retturn: 0 success
 */

int main(void)
{
	unsigned long i = 0, j = 2, sum;
	printf("%lu, ", i);
	printf("%lu, ", j);
	for (; j <= 4000000; j = sum)
	{
		sum = i + j;
		printf("%lu", sum);
		if (sum >= 4000000)
			continue;
		printf(", ");
		i = j;
	}
	printf("\n");
	return (0);
}
