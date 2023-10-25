#include "main.h"

/**
 * _pow_recursion - a function that returns the value of x
 * raised to the power of y.
 *
 * @x: input number
 * @y: the value to raise x to the power of it
 *
 * Return: x**y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recurcion(x, y - 1));
}
