#include "main.h"

/**
 * _isupper - function that returns 1 if the character
 * passed is uppercase and 0 if it's not
 *
 * @c : input of function
 *
 * Return: 1 if c is uppercase and 0 if it's not
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
