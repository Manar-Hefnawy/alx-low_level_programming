#include "main.h"

/**
 * print_line - a function that draws straight line in the terminal
 *
 * @n: number of time _ is printed
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');

		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
