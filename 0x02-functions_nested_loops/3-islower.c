#include "main.h"

/**
 * int_islower - function that returns 1 if the character 
 * passed is lowercase and 0 if it's not
 */

int _islower(int c)
{
    if (c >= 'a' && c <= 'z')
	    return (1);
    return (0);
}
