#include <stdio.h>

/**
 * main - Entry point
 * Description: C program that prints the alphabet in lowercase,
 * then in upper case
 * followed by a new line.
 * Return: 0
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	{
		putchar(c);
	}
	for (c = 'A'; c <= 'Z'; ++c)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
