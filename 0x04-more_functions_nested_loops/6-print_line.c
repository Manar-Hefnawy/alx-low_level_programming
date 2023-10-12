#include "main.h"

/**
 * print_line: a function that draws straight line in the terminal
 *
 * @n: number of time _ is printed
 */

void print_line(int n)
{
	int i;

	for (; i <= n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
			break;
		}
		_putchar('_');
	}
}
