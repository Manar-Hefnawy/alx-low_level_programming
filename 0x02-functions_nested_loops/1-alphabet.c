#include "main.h"
/**
 * Description: C program that prints the alphabet,
 * in lowercase, followed by a new line.
 * Prototype: void print_alphabet(void);
 * You can only use _putchar twice in your code
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
