#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 *
 * @n: the number of times the character \ should be printed
 */

void print_diagonal(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i < size; i++)
		{
			for (j = 1; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
