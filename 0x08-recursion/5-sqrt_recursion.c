#include "main.h"

/**
 * _sqrt_recursion - a function that returns the natural square
 * root of a number.
 * @n : input number
 * Return: natural square root if the number has it and -1 if not
 */

int _sqrt_wrapper(int n, int min, int max)
{
	int guess, sqrd_guess;

	if (min > max)
		return (-1);

	guess = (min + max) / 2;
	sqrd_guess = guess * guess;

	if (sqrd_guess == n)
		return (guess);
	else if (sqrd_guess < n)
		return (_sqrt_wrapper(n, guess + 1, max));
	else
		return (_sqrt_wrapper(n, min, guess - 1));
}

int _sqrt_recursion(int n)
{
	return (_sqrt_wrapper(n, 1, n));
}
