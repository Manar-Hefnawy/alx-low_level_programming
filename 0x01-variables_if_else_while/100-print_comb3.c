#include <stdio.h>

/**
 * main - Entry point
 * Description: C program that prints all possible combinations
 * of single digit numbers,
 * separated by ,, followed by a space,
 * followed by a new line.
 * Return: 0
 */

int main(void)
{
	int i;
	int d;

	for (i = 0; i <= 8; ++i)
	{
		for (d = i + 1; d <= 9; ++d)
		{
			putchar('0' + i);
			putchar('0' + d);

			if (i == 8 && d == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
