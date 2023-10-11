#include "main.h"

/**
 * _islower - function that returns 1 if the character
 * passed is lowercase and 0 if it's not
 *
 * @c : input of function
 *
 * Return: 1 if c is lower case and 0 if it's not
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
