#include "main.h"

/**
 * _isdigit - function that checks if the input is digit
 *
 * @c: input number
 *
 * Return: 1 if the input is digit and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);

	return (0);
}
