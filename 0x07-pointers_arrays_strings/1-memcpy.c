#include "main.h"

/**
 * _memcpy - a function that copies a memory area
 *
 * @dest: the destination memory area
 * @src: the source memory area
 * @n: the number of bytes
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	return (dest);
}
