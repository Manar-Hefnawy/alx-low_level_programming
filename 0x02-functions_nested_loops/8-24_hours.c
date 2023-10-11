#include "main.h"

/**
 * jack_bauer - prints every minute of the day of jack bauer
 */

void jack_bauer(void)
{
	int hours = 0;
	int minutes = 0;
	
	while (hours <= 23)
	{
		while (minutes <= 59)
		{
			_putchar((hours / 10) + 48);
			_putchar((hours % 10) + 48);
			_putchar(':');
			_putchar((minutes / 10) + 48);
			_putchar((minutes % 10) + 48);
			_putchar('\n');
			minutes++;
		}
		hours++;
		minutes = 0;
	}
}
