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
	int d1;
	int d2;
	int d3;

	for (d1 = 0; d1 <= 7; ++d1)
	{
		for (d2 = d1 + 1; d2 <= 8; ++d2)
		{
			for (d3 = d2 + 1; d2 <= 9; ++d3)
			{
				putchar('0' + d1);
				putchar('0' + d2);
				putchar('0' + d3);
				if (d1 == 7 && d2 == 8 && d3 == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
