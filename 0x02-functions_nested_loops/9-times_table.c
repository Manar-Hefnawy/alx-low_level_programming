#include "main.h"

/**
 * times_table - a function that prints the 9 times table starting from 0
 */

void times_table(void)
{
	int i, int j;
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if ((i * j) > 9)
			{
				_putchar((i * j / 10) + 48);
				_putchar((i * j % 10) + 48);
			} else
			{
				_putchar((i * j) + 48);
			}
			if (j == 9)
				continue;
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
