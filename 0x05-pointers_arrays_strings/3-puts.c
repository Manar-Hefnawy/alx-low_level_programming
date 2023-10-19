#include "main.h"

/**
 * _puts - a function that prints a string, followed by a new line, to stdout.
 *
 * @str: input string
 */

void _puts(char *str)
{
	char *ptr = str, *i;

	while (*ptr)
		ptr++;

	for (i = str; i <= ptr; i++)
		_putchar(*i);

	_putchar('\n');
}
