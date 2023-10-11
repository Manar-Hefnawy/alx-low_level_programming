#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - a function that prints all natural numbers from n to 98,
 * followed by a new line.
 *
 * @n: input number
 */

void print_to_98(int n)
{
	while (n != 98)
	{
		if (n < 98)
		{
			printf("%d, ", n);
			n++;
		} else
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("%d\n", 98);
}
