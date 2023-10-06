#include <stdio.h>

/**
 * main - Entry point
 * Description: C program that prints the alphabet in reverse in lowercase,
 * followed by a new line.
 * Return: 0
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; --c)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
