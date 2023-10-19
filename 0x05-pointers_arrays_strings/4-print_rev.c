#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse,
 * followed by a new line.
 *
 * @s: input string
 */

void print_rev(char *s)
{
	char *ptr = s, *i;

	while (*ptr)
		ptr++;

	for (i = ptr - 1; i >= s; i--)
		_putchar(*i);

	_putchar('\n');
}
