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

	for (i = 0; i < 10; ++i)
	{
		putchar('0' + i);
		putchar(' ');
		putchar(',');
	}
	putchar('\n');

	return (0);
}
