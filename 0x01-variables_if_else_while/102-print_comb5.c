#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: C program that prints all possible combinations of
 * two two-digit numbers.
 */

int main(void)
{
	int i, d;
	for (i = 0; i < 100; i++)
	{
		for (d = 0; d < 100; d++)
		{
			if (i < d)
			{
				putchar(( i / 10) + '0');
				putchar(( i % 10) + '0');
				putchar(' ');
				putchar(( d / 10) + '0');
				putchar(( d % 10) + '0');

				if (i != 98 || d != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return(0);
}
