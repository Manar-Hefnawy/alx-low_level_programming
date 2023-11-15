#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string.
 *
 * @s: input string
 *
 * Return: input string length
 */

int _strlen_recursion(char *s)
{
	int length;

	if (*s != '\0')
		length = 1 + _strlen_recursion(s + 1);
	else
		return(0);
	return(length);
}
