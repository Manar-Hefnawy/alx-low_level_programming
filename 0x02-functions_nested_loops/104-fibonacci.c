#include<stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2,
 * followed by a new line.
 * The numbers must be separated by comma, followed by a space ,
 *
 * Return: 0 success
 */
 
int main(void)
{
	int t = 0;
	unsigned long i = 1, j = 2, sum;

	printf("%lu, ", i);
	printf("%lu, ", j);

	for (; t < 96; t++)
	{
		sum = i + j;
		printf("%lu", sum);
		if (t == 95)
			continue;
		printf(", ");
		i = j;
		j = sum;
	}
	printf("\n");
	return (0);
}
