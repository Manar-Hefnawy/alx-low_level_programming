#include "main.h"

/**
 * _isupper - checks if the inputted character is upper case
 *
 * @c: input character
 *
 * Return: 1 if c is uppercase and 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 97 && c <= 122)
		return (1);

	return (0);
}
