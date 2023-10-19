#include "main.h"

/**
 * rev_string - a function that reverses a string.
 *
 * @s: input string.
 */

void rev_string(char *s)
{
	int length, i;
	char *ptr = s, *end_ch, *start_ch, ch;

	while (*ptr)
		ptr++;

	length = ptr - s;

	start_ch = s;
	end_ch = ptr - 1;

	for (i = 0; i < length / 2; i++)
	{
		ch = *end_ch;
		*end_ch = *start_ch;
		*start_ch = ch;

		start_ch++;
		end_ch--;
	}
}
