#include "main.h"

/**
 * _puts - a function that prints a string, followed by a new line, to stdout.
 *
 * @str: input string
 */

void _puts(char *str)
{
	char *ptr = str;

	while (*ptr)
		ptr++;

	for (char *i = str; i <= ptr; i++)
		_putchr(*i);

	_putchar('\n');
}
