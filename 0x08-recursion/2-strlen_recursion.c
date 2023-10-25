#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string.
 *
 * @s: input string
 *
 * Return: length of input string
 */

int _strlen_recursion(char *s)
{
	int length;

	if (*s != '\0')
	{
		length = 1 + _strlen_recursion(s + 1);
		return (length);
	}
	return (0);
}
