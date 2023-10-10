#include "main.h"
/**
 * print_alphabet - use the _putchar function to print
 * alphabet letters in lowercase
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	{
		_putchar(c);
	}
	_putchar('\n');
}
