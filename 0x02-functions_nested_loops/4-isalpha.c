#include "main.h"

/**
 * _isalpha - function that checks if the inputed character is
 * a letter or not
 *
 * @c : input of function
 *
 * Return: 1 if c is a letter and 0 if it's not
 */

int _isalpha(int c)
{
        if (c >= 'A' && c <= 'Z' &&
	    c >= 'a' && c <= 'z')
                return (1);
        return (0);
}
