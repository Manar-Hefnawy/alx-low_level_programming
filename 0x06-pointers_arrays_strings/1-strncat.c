#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 *
 * @dest: first string
 * @src: second string
 * @n: number of bytes used from src at most.
 *
 * Return: concatenated string.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++);

	for (j = 0; src[j] != '\0' && j < n; j++)
		dest[i + j] = src[j];

	dest[i + j] = '\0';
	return (dest);
}
