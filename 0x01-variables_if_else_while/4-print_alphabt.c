#include <stdio.h>

/**
 * main - Entry point
 * Description: C program that prints the alphabet in lowercase,
 * followed by a new line.
 * Return: 0
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
	}
	putchar('\n');

	return (0);
}
