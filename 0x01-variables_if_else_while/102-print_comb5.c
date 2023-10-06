#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: C program that prints all possible combinations of
 * two two-digit numbers.
 */

int main(void)
{
	int n1, n2;
	for (n1 = 0; n1 < 100; n1++)
	{
		for (n2 = n1 +1; n2 < 100; n1++)
		{
			if (n1 < n2)
			{
				putchar(( n1 / 10) + '0');
				putchar(( n1 % 10) + '0');
				putchar(' ');
				putchar(( n2 / 10) + '0');
				putchar(( n2 % 10) + '0');

				if (n1 == 98 && n2 == 99)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return(0);
}
