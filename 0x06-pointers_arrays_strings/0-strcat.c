#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 *
 * @dest: first string
 * @src: second string
 */

char *_strcat(char *dest, char *src)
{
	char *cs = dest;

	while (*dest != '\0')
		dest++;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (cs);
}
