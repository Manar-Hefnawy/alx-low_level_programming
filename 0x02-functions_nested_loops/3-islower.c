#include "main.h"

/**
 * int_islower - function that returns 1 if the character 
 * passed is lowercase and 0 if it's not
 */

int _islower(int c)
{
    if ((c >= 'a') && (c <= 'z'))
    {
        _putchar(49);
    } else
    {
        _putchar(48);
    }
    return(0);
}
