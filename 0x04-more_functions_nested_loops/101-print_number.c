#include "main.h"

/**
 * print_number - a function that prints an integer using _putchar function
 *
 * @n : number to be printed
 */

void print_number(int n)
{
	int rd, rs = 0;

	while (n > 0)
	{
		rd = n % 10;
		rs = rs * 10 + rd;
		n = n / 10;
	}
	while (rs)
	{
		_putchar(rs % 10 + 48);
		rs /= 10;
	}
}
