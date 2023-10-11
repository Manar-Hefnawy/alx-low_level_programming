#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer.
 *
 * @i: input intger
 *
 * Return: absolute value of i
 */

int _abs(int i)
{
	if (i < 0)
		i = i * (-1);

	return (i);
}
