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
	int length;

	while(*ptr)
		ptr++;

	length = ptr - s;

	return (length);
}
