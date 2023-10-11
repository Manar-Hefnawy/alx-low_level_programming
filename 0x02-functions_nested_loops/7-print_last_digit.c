#include "main.h"

/**
 * print_last_digit - prints the last digit of inputed number
 *
 * @n: input number
 *
 * Return: last digit
 */

int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		n = -1 * n;

	int last_digit = n % 10;

	_putchar(last_digit + '0');
	return (last_digit);
}
