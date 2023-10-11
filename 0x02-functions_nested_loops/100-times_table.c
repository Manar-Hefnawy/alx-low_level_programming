#include "main.h"

/**
 * print_times_table - a function that prints times table of n starting from 0
 *
 * @n: input number
 */

void print_times_table(int n)
{
	int i, j, prod;
	for (i = 0; i <= n; i++)
	{
		if (n < 0 || n > 15)
			break;
		else{
			_putchar(48);
			for (j = 1; j <= n; j++)
			{
				_putchar(' ');
				_putchar(' ');
				prod = i * j;
				if (prod <= 9)
				{
					_putchar(' ');
					_putchar(' ');
				} else if (prod <= 99)
				{
					_putchar(' ');
					_putchar((prod / 10) + 48);
				}else
				{
					_putchar((prod / 100) + 48);
					_putchar((prod / 10 % 10) + 48);
				}
				_putchar((prod % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
