#include "main.h"

/**
 * _isalpha - function that checks if the inputed character is
 * a letter or not
 *
 * @c : input of function
 *
 * Return: 1 if c is a letter and 0 if it's not
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	} else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
