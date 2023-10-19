#include "main.h"

/**
 * puts2 - a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 *
 * @str: input string
 */

void puts2(char *str)
{
	char *ptr = str, *i;

	while (*ptr)
		ptr++;

	for (i = str; i < ptr; i+= 2)
		_putchar(*i);

	_putchar('\n');
}
