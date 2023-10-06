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

	for (i = 0; i <= 9; ++i)
	{
		putchar('0' + i);
		if (i <= 8)
		{
			putchar(' ');
			putchar(',');
		}
	}
	putchar('\n');

	return (0);
}
