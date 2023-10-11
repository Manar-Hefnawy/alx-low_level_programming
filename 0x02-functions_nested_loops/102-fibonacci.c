#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2,
 * followed by a new line.
 * The numbers must be separated by comma, followed by a space ,
 *
 * Return: 0 success
 */

unsigned int main(void)
{
	int i = 1, j = 2, t = 0, sum;

	for (; t < 50; t++)
	{
		sum = i + j;
		printf("%u", sum);
		if (t == 49)
			continue;
		printf(", ");
		i = j;
		j = sum;
	}
	printf("\n");
	return (0);
}
