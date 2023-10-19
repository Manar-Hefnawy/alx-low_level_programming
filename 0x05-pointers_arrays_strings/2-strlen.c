#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 *
 * @s : input string
 *
 * Return: length of string.
 */

int _strlen(char *s)
{
	char *ptr = s;

	while(*ptr)
		ptr++;

	int length = ptr - s;

	return (length);
}
