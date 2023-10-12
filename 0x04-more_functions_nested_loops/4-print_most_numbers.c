#include "main.h"

/**
 * print_numbers - print numbers from 0 to 9 except 2 & 4 followed by new line
 */

void print_most_numbers(void)
{
	char i = 48;

	for (; i <= 57; ++i)
	{
		if (i == '2' || i == '4')
			continue;
		_putchar(i);
	}

	_putchar('\n');
}
