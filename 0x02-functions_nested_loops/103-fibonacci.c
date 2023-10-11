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
	unsigned long i = 0, j = 1, sub_sum;
	int sum;

	while (1)
	{
		sub_sum = i + j;
		if (sub_sum > 4000000)
			break;

		if ((sub_sum % 2) == 0)
			sum += sub_sum;

		i = j;
		j = sub_sum;
	}
	printf("%d\n", sum);

	return (0);
}
